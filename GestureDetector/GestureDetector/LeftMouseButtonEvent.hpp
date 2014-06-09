#ifndef LEFT_MOUSE_BUTTON_EVENT_HPP
#define LEFT_MOUSE_BUTTON_EVENT_HPP

#include "MouseEvent.hpp"

/*
 * @author: Grzegorz Mirek
*/
class LeftMouseButtonEvent : public MouseEvent {
protected:
	int getButtonDownCode() override;
	int getButtonUpCode() override;
};

#endif