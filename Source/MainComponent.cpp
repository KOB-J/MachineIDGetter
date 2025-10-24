#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (300, 200);
    
    addAndMakeVisible(textEditor);
    textEditor.setJustification(juce::Justification(juce::Justification::centred));
    textEditor.setReadOnly(true);
    textEditor.setText(juce::OnlineUnlockStatus::MachineIDUtilities::getUniqueMachineID());
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

//    g.setFont (juce::FontOptions (16.0f));
//    g.setColour (juce::Colours::white);
    //g.drawText (juce::OnlineUnlockStatus::MachineIDUtilities::getUniqueMachineID(), getLocalBounds(), juce::Justification::centred, true);
    DBG(juce::OnlineUnlockStatus::MachineIDUtilities::getUniqueMachineID());
}

void MainComponent::resized()
{
    textEditor.setBounds(getLocalBounds());
}
