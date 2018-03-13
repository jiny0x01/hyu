
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
	//NoteThread하나로 다 바꾸고 NoteThread에서 큐로 관리함
	
	addAndMakeVisible(note_controller);
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
	//map frame
	g.setColour(Colours::black);
    nframe1.setBounds(getWidth()/12*4,0,getWidth()/12,getHeight());   
    nframe2.setBounds(getWidth()/12*5,0,getWidth()/12,getHeight());   
    nframe3.setBounds(getWidth()/12*6,0,getWidth()/12,getHeight());   
    nframe4.setBounds(getWidth()/12*7,0,getWidth()/12,getHeight());   
	nframe5.setBounds(getWidth()/12*4,getHeight()/12*11,getWidth()/12*4,getHeight());
    nframe6.setBounds(getWidth()/12*4,getHeight()/12*10.5f,getWidth()/12*4,getHeight()); //판정 포인트 0.25
	
	note_controller.setBounds(0,0,getWidth(),getHeight());
/*	
	block2.setBounds(getWidth()/12*5+3,0,getWidth()/12-6,getHeight()/12*11);
	block3.setBounds(getWidth()/12*6+3,0,getWidth()/12-6,getHeight()/12*11);
	block4.setBounds(getWidth()/12*7+3,0,getWidth()/12-6,getHeight()/12*11);

	for(int i=0;i<block1.GetSpeed();i++)
	{
		block1.repaint();
		block2.repaint();
//		block3.repaint();
//		block4.repaint();
	}


	for(int i=0;i<block3.GetSpeed();i++){
		block3.repaint();
		block4.repaint();
	}
*/
	g.setColour(Colour(255,91,51));
	g.setFont(60.0f);

	//Rectanble을 만들어 상대적으로 접근할 필요가 있음. KeyComponent에도 마찬가지로
	//입력효과를 줄때 필요함
	g.setColour (Colour((juce::uint32) Random::getSystemRandom().nextInt()).withAlpha(0.5f).withBrightness(0.7f));
	g.drawText("D",getWidth()/12*4,getHeight()/11*10,getWidth()/12,getHeight()/11,Justification::centred,true);
	g.drawText("F",getWidth()/12*5,getHeight()/11*10,getWidth()/12,getHeight()/11,Justification::centred,true);
	g.drawText("J",getWidth()/12*6,getHeight()/11*10,getWidth()/12,getHeight()/11,Justification::centred,true);
	g.drawText("K",getWidth()/12*7,getHeight()/11*10,getWidth()/12,getHeight()/11,Justification::centred,true);

}

void NoteComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
