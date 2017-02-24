namespace ntwelve
{
using namespace juce;

Font NTLookAndFeel::getSystemFont()
{
    return Font(toPixelHeight(10));
}

Font NTLookAndFeel::getSmallSystemFont()
{
    return Font(toPixelHeight(9));
}

}
