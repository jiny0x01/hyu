#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include <deque>
/* 노트 떨어지는 그래픽 */

/* 생성되는 노트를 큐에 넣고 라인이 지나면 앞에서부터 뺸다.
 */

class Note    
{
public:
	Note() {}
	Note(const float& x, const float& y, const float& width, const float& height);
	virtual ~Note();
	/********************************************/
	Rectangle<float> rect;
private:
	//Time startTime;
	//RelativeTime rtime;
	const KeyPress& dkey = KeyPress('d');
	const KeyPress& fkey = KeyPress('f');
	const KeyPress& jkey = KeyPress('j');
	const KeyPress& kkey = KeyPress('k');
	//void effectSound();
};

enum class Judgement : int {
	wow = 120,
	ok = 100,
	hyu = 70
}; 

class NoteManager : public AnimatedAppComponent
{
public:
	NoteManager();
	~NoteManager();
	void update() override;
	void paint(Graphics&) override;
	void resized() override;
	void generateNote(const short playTime = 300);
private:
	// note queue
	std::deque<Note> noteDeque[4];
	std::deque<Judgement> score;
	int activePos = 0;											// 큐에서 활성화된 노트 pos
	bool initNote = false;
	int width;
	const KeyPress dkey = KeyPress('d');
	const KeyPress fkey = KeyPress('f');
	const KeyPress jkey = KeyPress('j');
	const KeyPress kkey = KeyPress('k');
	
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(NoteManager)
};

/* 전체 런타임이 있고 그를 노트의 갯수만큼 분할한 시간 -0.3~+0.1 까지 설정하여 노트를 삽입

*/
