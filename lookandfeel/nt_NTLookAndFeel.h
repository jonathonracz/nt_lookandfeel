#pragma once

namespace ntwelve
{
using namespace juce;

class NTLookAndFeel :
    public LookAndFeel_V3
{
public:
    NTLookAndFeel();
    ~NTLookAndFeel() {}

    enum MetaColorIds
    {
        foreground = 0x120000,
        midground,
        background,
        superForeground,
        enabledText,
        disabledText,
        highlight,
        popupMenuBackground,
        popupMenuBackgroundHighlight,
        toolTipBackground,
        toolTipText,
    };

    bool loadTheme(File themeFile);
    static Font getSystemFont();
    static Font getSmallSystemFont();

    void drawButtonBackground(Graphics&, Button&,
        const Colour& backgroundColour, bool isMouseOverButton,
        bool isButtonDown) override;

    void drawButtonText(Graphics&, TextButton&, bool isMouseOverButton,
        bool isButtonDown) override;

private:
    void setThemeFromContents(String contents);
    static float toPixelHeight(float pointHeight);

};

}
