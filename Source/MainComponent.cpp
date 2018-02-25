/*
  ==============================================================================
    This file was auto-generated!
  ==============================================================================
*/

#include "MainComponent.h"
//==============================================================================
MainComponent::MainComponent()
{
    // Make sure you set the size of the component after
    // you add any child components.
    setSize (1280,1080);
//    setFramesPerSecond (60); // This sets the frequency of the update calls.
	setFramesPerSecond(20);
    addAndMakeVisible(notecomponent);
    addAndMakeVisible(keycomponent);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::update()
{
    // This function is called at the frequency specified by the setFramesPerSecond() call
    // in the constructor. You can use it to update counters, animate values, etc.
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll(Colours::white);
    notecomponent.setBounds(0,0,getWidth(),getHeight());
	keycomponent.setBounds(0,0,getWidth(),getHeight());
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
