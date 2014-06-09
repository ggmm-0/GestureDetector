#ifndef MAPPING_SCREEN_TAP_LISTENER_HPP
#define MAPPING_SCREEN_TAP_LISTENER_HPP

#include <iostream>
#include "BaseScreenTapListener.hpp"

/*
 * Maps ScreenTap events to system's left mouse button event.
 * @author: Grzegorz Mirek
*/
class MappingScreenTapListener : public BaseScreenTapListener {
protected:
	void onScreenTap(const Leap::ScreenTapGesture& screenTap) override;
};

#endif