#include "JonLookAndFeel.h"

Font JonLookAndFeel::getSystemFont()
{
    /*
    NSFont* font = [NSFont systemFontOfSize:[NSFont systemFontSize]];

    Desktop::Displays::Display main = Desktop::getInstance().getDisplays().getMainDisplay();
    float fontPixelHeight = ([NSFont systemFontSize] * (main.dpi / main.scale)) / 72;

    return Font([[font displayName] UTF8String], fontPixelHeight, 0); // TODO: styles?
     */
    return Font();
}
