#include <AppKit/AppKit.h>

namespace ntwelve
{
using namespace juce;

Font NTLookAndFeel::getSystemFont()
{
    NSFont* font = [NSFont systemFontOfSize:NSFont.systemFontSize];
    float fontPixelHeight = toPixelHeight(NSFont.systemFontSize);
    return Font([font.displayName UTF8String], fontPixelHeight, 0);
}

Font NTLookAndFeel::getSmallSystemFont()
{
    NSFont* font = [NSFont systemFontOfSize:NSFont.smallSystemFontSize];
    float fontPixelHeight = toPixelHeight(NSFont.smallSystemFontSize);
    return Font([font.displayName UTF8String], fontPixelHeight, 0);
}

}
