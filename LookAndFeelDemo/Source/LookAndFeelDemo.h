/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "NTLookAndFeel.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class LookAndFeelDemo  : public Component,
                         public ButtonListener,
                         public ComboBoxListener,
                         public SliderListener
{
public:
    //==============================================================================
    LookAndFeelDemo ();
    ~LookAndFeelDemo();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    std::unique_ptr<NTLookAndFeel> lookAndFeel;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<GroupComponent> groupComponent;
    ScopedPointer<TextButton> textButton;
    ScopedPointer<ComboBox> comboBox;
    ScopedPointer<Viewport> viewport;
    ScopedPointer<TextEditor> textEditor;
    ScopedPointer<TreeView> treeView;
    ScopedPointer<Slider> slider;
    ScopedPointer<Slider> slider2;
    ScopedPointer<Slider> slider3;
    ScopedPointer<Slider> slider4;
    ScopedPointer<Slider> slider5;
    ScopedPointer<Slider> slider6;
    ScopedPointer<ToggleButton> toggleButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LookAndFeelDemo)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
