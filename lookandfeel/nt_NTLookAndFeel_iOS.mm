#include <UIKit/UIKit.h>

namespace ntwelve
{
using namespace juce;

Font NTLookAndFeel::getSystemFont()
{
    UIFont* font = [UIFont systemFontOfSize:UIFont.systemFontSize];
    float systemFontSize = UIFont.systemFontSize;
    return Font([font.familyName UTF8String], toPixelHeight(systemFontSize), 0);
}

Font NTLookAndFeel::getSmallSystemFont()
{
    UIFont* font = [UIFont systemFontOfSize:UIFont.smallSystemFontSize];
    float systemFontSize = UIFont.smallSystemFontSize;
    return Font([font.familyName UTF8String], toPixelHeight(systemFontSize), 0);
}

}
