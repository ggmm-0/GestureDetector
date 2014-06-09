#ifndef MOUSE_EVENT_HPP
#define MOUSE_EVENT_HPP

#include "Event.hpp"
#include "windows.h"

/*
 * @author: Grzegorz Mirek
*/
class MouseEvent : public Event {
public:
	void trigger();
protected:
	virtual int getButtonDownCode() = 0;
	virtual int getButtonUpCode() = 0;
private:
	INPUT createMouseInput(int buttonCode);
};

#endif