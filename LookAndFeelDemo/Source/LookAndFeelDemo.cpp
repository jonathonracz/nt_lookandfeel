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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "LookAndFeelDemo.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
LookAndFeelDemo::LookAndFeelDemo ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    lookAndFeel = std::unique_ptr<NTLookAndFeel>(new NTLookAndFeel);
    LookAndFeel::setDefaultLookAndFeel(lookAndFeel.get());
    //[/Constructor_pre]

    addAndMakeVisible (groupComponent = new GroupComponent ("new group",
                                                            TRANS("group")));

    addAndMakeVisible (textButton = new TextButton ("Tools"));
    textButton->addListener (this);

    addAndMakeVisible (comboBox = new ComboBox ("new combo box"));
    comboBox->setEditableText (false);
    comboBox->setJustificationType (Justification::centredLeft);
    comboBox->setTextWhenNothingSelected (String());
    comboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox->addItem (TRANS("hello"), 1);
    comboBox->addItem (TRANS("world"), 2);
    comboBox->addItem (TRANS("it"), 3);
    comboBox->addItem (TRANS("is"), 4);
    comboBox->addItem (TRANS("me"), 5);
    comboBox->addListener (this);

    addAndMakeVisible (viewport = new Viewport ("new viewport"));

    addAndMakeVisible (textEditor = new TextEditor ("new text editor"));
    textEditor->setMultiLine (true);
    textEditor->setReturnKeyStartsNewLine (true);
    textEditor->setReadOnly (false);
    textEditor->setScrollbarsShown (true);
    textEditor->setCaretVisible (true);
    textEditor->setPopupMenuEnabled (true);
    textEditor->setText (TRANS("some text"));

    addAndMakeVisible (treeView = new TreeView ("new treeview"));
    treeView->setDefaultOpenness (true);

    addAndMakeVisible (slider = new Slider ("new slider"));
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::LinearHorizontal);
    slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider->addListener (this);

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::LinearBar);
    slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider2->addListener (this);

    addAndMakeVisible (slider3 = new Slider ("new slider"));
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::IncDecButtons);
    slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider3->addListener (this);

    addAndMakeVisible (slider4 = new Slider ("new slider"));
    slider4->setRange (0, 10, 0);
    slider4->setSliderStyle (Slider::TwoValueHorizontal);
    slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider4->addListener (this);

    addAndMakeVisible (slider5 = new Slider ("new slider"));
    slider5->setRange (0, 10, 0);
    slider5->setSliderStyle (Slider::ThreeValueHorizontal);
    slider5->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider5->addListener (this);

    addAndMakeVisible (slider6 = new Slider ("new slider"));
    slider6->setRange (0, 10, 0);
    slider6->setSliderStyle (Slider::Rotary);
    slider6->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider6->addListener (this);

    addAndMakeVisible (toggleButton = new ToggleButton ("new toggle button"));
    toggleButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

LookAndFeelDemo::~LookAndFeelDemo()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent = nullptr;
    textButton = nullptr;
    comboBox = nullptr;
    viewport = nullptr;
    textEditor = nullptr;
    treeView = nullptr;
    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;
    slider5 = nullptr;
    slider6 = nullptr;
    toggleButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void LookAndFeelDemo::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    g.fillAll(findColour(NTLookAndFeel::MetaColorIds::foreground));
    //[/UserPaint]
}

void LookAndFeelDemo::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    groupComponent->setBounds (0, 0, 600, 400);
    textButton->setBounds (20, 20, 72, 24);
    comboBox->setBounds (200, 20, 150, 20);
    viewport->setBounds (20, 50, 170, 200);
    textEditor->setBounds (20, 260, 150, 120);
    treeView->setBounds (200, 60, 150, 320);
    slider->setBounds (370, 20, 210, 20);
    slider2->setBounds (370, 50, 210, 20);
    slider3->setBounds (370, 80, 210, 20);
    slider4->setBounds (370, 110, 210, 20);
    slider5->setBounds (370, 140, 210, 20);
    slider6->setBounds (370, 170, 210, 70);
    toggleButton->setBounds (370, 250, 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void LookAndFeelDemo::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == toggleButton)
    {
        //[UserButtonCode_toggleButton] -- add your button handler code here..
        //[/UserButtonCode_toggleButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void LookAndFeelDemo::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == comboBox)
    {
        //[UserComboBoxCode_comboBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void LookAndFeelDemo::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider)
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3)
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4)
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slider5)
    {
        //[UserSliderCode_slider5] -- add your slider handling code here..
        //[/UserSliderCode_slider5]
    }
    else if (sliderThatWasMoved == slider6)
    {
        //[UserSliderCode_slider6] -- add your slider handling code here..
        //[/UserSliderCode_slider6]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="LookAndFeelDemo" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="10" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <GROUPCOMPONENT name="new group" id="671fbbeab74aa507" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="0 0 600 400" title="group"/>
  <TEXTBUTTON name="Tools" id="83d259ea91b7cc" memberName="textButton" virtualName=""
              explicitFocusOrder="0" pos="20 20 72 24" buttonText="Tools" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="97c96ae192a91cce" memberName="comboBox"
            virtualName="" explicitFocusOrder="0" pos="200 20 150 20" editable="0"
            layout="33" items="hello&#10;world&#10;it&#10;is&#10;me" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <VIEWPORT name="new viewport" id="c70eee5ad82ff01a" memberName="viewport"
            virtualName="" explicitFocusOrder="0" pos="20 50 170 200" vscroll="1"
            hscroll="1" scrollbarThickness="18" contentType="2" jucerFile=""
            contentClass="" constructorParams=""/>
  <TEXTEDITOR name="new text editor" id="8e3968c885f4a51b" memberName="textEditor"
              virtualName="" explicitFocusOrder="0" pos="20 260 150 120" initialText="some text"
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TREEVIEW name="new treeview" id="973698de9393bf5c" memberName="treeView"
            virtualName="" explicitFocusOrder="0" pos="200 60 150 320" rootVisible="1"
            openByDefault="1"/>
  <SLIDER name="new slider" id="26a29395604b59b2" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="370 20 210 20" min="0" max="10" int="0"
          style="LinearHorizontal" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="5bdf82ecadd72832" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="370 50 210 20" min="0"
          max="10" int="0" style="LinearBar" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="b752bedda7ad1753" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="370 80 210 20" min="0"
          max="10" int="0" style="IncDecButtons" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="496ca24bacd69c49" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="370 110 210 20" min="0"
          max="10" int="0" style="TwoValueHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="1bc0663788180951" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="370 140 210 20" min="0"
          max="10" int="0" style="ThreeValueHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="new slider" id="1fdb13b6dcb07ac7" memberName="slider6"
          virtualName="" explicitFocusOrder="0" pos="370 170 210 70" min="0"
          max="10" int="0" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <TOGGLEBUTTON name="new toggle button" id="de4ae5babfd35f53" memberName="toggleButton"
                virtualName="" explicitFocusOrder="0" pos="370 250 150 24" buttonText="new toggle button"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
