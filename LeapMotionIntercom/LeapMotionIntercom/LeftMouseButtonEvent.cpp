#include "LeftMouseButtonEvent.hpp"

int LeftMouseButtonEvent::getButtonDownCode() {
	return MOUSEEVENTF_LEFTDOWN;
}

int LeftMouseButtonEvent::getButtonUpCode() {
	return MOUSEEVENTF_LEFTUP;
}