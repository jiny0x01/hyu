#include "../JuceLibraryCode/JuceHeader.h"
#include "Note.h"

Note::Note()
{
	setFramesPerSecond(60);
}
Note::Note(Rectangle<float> r) 
{
	DBG("initialize");
}
Note::~Note()
{ 

} 

void Note::update()
{

}

void Note::paint (Graphics& g)
{
	// 무지개 노트
	g.fillAll(Colour(13,13,13));
	
	//g.setColour (Colour((juce::uint32) Random::getSystemRandom().nextInt()).withAlpha(0.5f).withBrightness(0.7f));
	g.setColour(Colours::red);
	g.fillRect(block);
	DownNote();
}

void Note::resized()
{

}

void Note::SetNotePos(const Rectangle<float>& rect)
{
	block = rect;
}

void Note::DownNote(){
	DBG("DownNote");
	if(block.getY() <= getHeight() - getHeight()/12){
		block.setY(block.getY()+10);
		repaint();
	}
	else
	{
		block.setY(-10);
		block.setX(getWidth()/12 * Random::getSystemRandom().nextInt(Range<int>(4,8)));
	}
}

void Note::AddNote(const Rectangle<float>& rect)
{
}
