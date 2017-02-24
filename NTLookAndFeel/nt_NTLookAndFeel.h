#pragma once

#include <JuceHeader.h>

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

    void drawButtonBackground(Graphics&, Button&,
        const Colour& backgroundColour, bool isMouseOverButton,
        bool isButtonDown) override;

    void drawButtonText(Graphics&, TextButton&, bool isMouseOverButton,
        bool isButtonDown) override;

private:
    void setThemeFromContents(String contents);

};
