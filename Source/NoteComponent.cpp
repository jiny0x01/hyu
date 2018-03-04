
/*
  ==============================================================================
	NoteComponent.cpp
    Created: 23 Feb 2018 8:41:53pm
    Author:  moca
  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "NoteComponent.h"

//==============================================================================
NoteComponent::NoteComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(nframe1);
    addAndMakeVisible(nframe2);
    addAndMakeVisible(nframe3);
    addAndMakeVisible(nframe4);
    addAndMakeVisible(nframe5);
    addAndMakeVisible(nframe6);
//    addAndMakeVisible(block);
	addAndMakeVisible(bgm);
}

NoteComponent::~NoteComponent()
{
}

void NoteComponent::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.
       You should replace everything in this method with your own
       drawing code..
    jk*/

	g.setColour(Colours::black);
    nframe1.setBounds(getWidth()/12*4,0,getWidth()/12,getHeight());   
    nframe2.setBounds(getWidth()/12*5,0,getWidth()/12,getHeight());   
    nframe3.setBounds(getWidth()/12*6,0,getWidth()/12,getHeight());   
    nframe4.setBounds(getWidth()/12*7,0,getWidth()/12,getHeight());   
	nframe5.setBounds(getWidth()/12*4,getHeight()/12*11,getWidth()/12*4,getHeight());
    nframe6.setBounds(getWidth()/12*4,getHeight()/12*10.75,getWidth()/12*4,getHeight()); //판정 포인트 0.25
	g.setColour(Colours::black);
	g.setFont(60.0f);
	g.drawText("D",getWidth()/12*4,getHeight()/11*10,getWidth()/12,getHeight()/11,Justification::centredBottom,true);
	g.drawText("F",getWidth()/12*5,getHeight()/11*10,getWidth()/12,getHeight()/11,Justification::centredBottom,true);
	g.drawText("J",getWidth()/12*6,getHeight()/11*10,getWidth()/12,getHeight()/11,Justification::centredBottom,true);
	g.drawText("K",getWidth()/12*7,getHeight()/11*10,getWidth()/12,getHeight()/11,Justification::centredBottom,true);
}

void NoteComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
