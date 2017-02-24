/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainContentComponent::MainContentComponent() :
    lookAndFeel(new NTLookAndFeel)
{
    setSize (600, 400);
    setLookAndFeel(lookAndFeel.get());
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff001F36));

    //g.setFont (Font("San Francisco", 48.0f, 0));
    g.setFont (Font(48.0f));
    g.setColour (Colours::white);
    g.drawText ("QISzj1", getLocalBounds(), Justification::centred, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
