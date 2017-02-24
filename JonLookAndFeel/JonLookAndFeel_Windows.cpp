#include "JonLookAndFeel.h"

#include "Windows.h"

static bool getMetrics(NONCLIENTMETRICS& metrics)
{
    if (SystemParametersInfo(
        SPI_GETNONCLIENTMETRICS,
        sizeof(NONCLIENTMETRICS),
        &metrics,
        0) == 0)
        return false;

    return true;
}

static Font toJuceFont(const LOGFONT& font)
{
    // TODO: verify this, make it work with multiple monitors(?)
    Desktop::Displays::Display main = Desktop::getInstance().getDisplays().getMainDisplay();
    // http://stackoverflow.com/q/480320
    float fontPixelHeight =
        fabsf(font.lfHeight * static_cast<float>(main.dpi)) / 72.0f;

    int flags = Font::FontStyleFlags::plain;
    if (font.lfItalic)
        flags |= Font::FontStyleFlags::italic;
    if (font.lfUnderline)
        flags |= Font::FontStyleFlags::underlined;
    if (font.lfWeight >= FW_BOLD)
        flags |= Font::FontStyleFlags::bold;

    return Font(font.lfFaceName, fontPixelHeight, flags);
}

Font JonLookAndFeel::getSystemFont()
{
    NONCLIENTMETRICS metrics;
    if (!getMetrics(metrics))
        return Font();

    return toJuceFont(metrics.lfCaptionFont);
}
