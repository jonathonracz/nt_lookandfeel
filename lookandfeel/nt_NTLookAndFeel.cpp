namespace ntwelve
{
using namespace juce;

static String getDefaultTheme()
{
    return R"(
    {
        "foreground": [64, 64, 64],
        "midground" : [51, 51, 51],
        "background" : [40, 40, 40],
        "superForeground" : [128, 128, 128],
        "enabledText" : [240, 240, 240],
        "disabledText" : [147, 147, 147],
        "highlight" : [97, 140, 204],
        "popupMenuBackground" : [28, 28, 28],
        "popupMenuBackgroundHighlight" : [102, 102, 102],
        "toolTipBackground" : [240, 240, 240],
        "toolTipText" : [120, 120, 120]
    }
    )";
}

NTLookAndFeel::NTLookAndFeel()
{
    setUsingNativeAlertWindows(true);
    setDefaultSansSerifTypefaceName(getSystemFont().getTypefaceName());
    setThemeFromContents(getDefaultTheme());
}

bool NTLookAndFeel::loadTheme(File themeFile)
{
    if (!themeFile.existsAsFile())
        return false;

    setThemeFromContents(themeFile.loadFileAsString());
    return true;
}

void NTLookAndFeel::setThemeFromContents(String contents)
{
    var json;
    Result res = JSON::parse(contents, json);
    if (res.failed())
        return;

    const size_t startId = foreground;
    const size_t numIds = toolTipText - startId + 1;

    const char* enumsToStrings[numIds] = {
        "foreground",
        "midground",
        "background",
        "superForeground",
        "enabledText",
        "disabledText",
        "highlight",
        "popupMenuBackground",
        "popupMenuBackgroundHighlight",
        "toolTipBackground",
        "toolTipText",
    };

    for (size_t i = 0; i < numIds; ++i)
    {
        var value = json.getProperty(enumsToStrings[i], var());
        if (value == var() || !value.isArray() || (value.getArray()->size() != 3))
            continue;

        Colour col(
            std::min(static_cast<uint8>(static_cast<int>(value.getArray()->getUnchecked(0))), static_cast<uint8>(255)),
            std::min(static_cast<uint8>(static_cast<int>(value.getArray()->getUnchecked(1))), static_cast<uint8>(255)),
            std::min(static_cast<uint8>(static_cast<int>(value.getArray()->getUnchecked(2))), static_cast<uint8>(255)));

        setColour(startId + i, col);
    }
}

float NTLookAndFeel::toPixelHeight(float pointHeight)
{
    Desktop::Displays::Display main = Desktop::getInstance().getDisplays().getMainDisplay();
    return (pointHeight * (main.dpi / main.scale)) / 72;
}

void NTLookAndFeel::drawButtonBackground(Graphics& g, Button& button,
    const Colour& backgroundColour, bool isMouseOverButton, bool isButtonDown)
{
    bool connL = button.isConnectedOnLeft();
    bool connR = button.isConnectedOnRight();
    bool connT = button.isConnectedOnTop();
    bool connB = button.isConnectedOnBottom();
    Path outline;
    outline.addRoundedRectangle(
        (connL) ? 1 : 2,
        (connT) ? 1 : 2,
        button.getWidth() - (((connL) ? 0 : 2) + ((connR) ? 0 : 2)),
        button.getHeight() - (((connT) ? 0 : 2) + ((connB) ? 0 : 2)),
        4, 4,
        !(connL || connT),
        !(connR || connT),
        !(connL || connB),
        !(connR || connB));

    if (isButtonDown)
        g.setColour(findColour(background));
    else
        g.setColour(findColour(foreground));

    g.fillPath(outline);

    if (button.hasKeyboardFocus(false))
        g.setColour(findColour(highlight));
    else
        g.setColour(findColour(background));

    g.strokePath(outline, PathStrokeType(1.0f));
}

void NTLookAndFeel::drawButtonText(Graphics& g, TextButton& button,
    bool isMouseOverButton, bool isButtonDown)
{
    g.setColour(button.findColour(enabledText).withMultipliedAlpha(button.isEnabled() ? 1.0f : 0.5f));

    const int yIndent = jmin(2, button.proportionOfHeight(0.3f));
    const int cornerSize = jmin(button.getHeight(), button.getWidth()) / 2;

    const int fontHeight = roundToInt(g.getCurrentFont().getHeight() * 0.5f);
    const int leftIndent = jmin(fontHeight, 2 + cornerSize / (button.isConnectedOnLeft() ? 4 : 2));
    const int rightIndent = jmin(fontHeight, 2 + cornerSize / (button.isConnectedOnRight() ? 4 : 2));
    const int textWidth = button.getWidth() - leftIndent - rightIndent;

    if (textWidth > 0)
        g.drawFittedText(button.getButtonText(),
            leftIndent, yIndent, textWidth, button.getHeight() - yIndent * 2,
            Justification::horizontallyCentred, 2);
}

}
