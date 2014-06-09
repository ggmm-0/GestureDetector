#ifndef KEY_EVENT_HPP
#define KEY_EVENT_HPP

#include "Event.hpp"
#include "windows.h"

/*
 * @author: Grzegorz Mirek
*/
class KeyEvent : public Event {
private:
	int keyCode;
public:
	KeyEvent(int keyCode);
	void trigger() override;
private:
	INPUT createKeyDownInput();
	INPUT createKeyUpInput();
	INPUT createKeyInput(int keyCode);
};

#endif