#ifndef DEFAULT_SCREEN_TAP_LISTENER_HPP
#define DEFAULT_SCREEN_TAP_LISTENER_HPP

#include <iostream>
#include "BaseScreenTapListener.hpp"

/*
 * Prints ScreenTap events to standard output.
 * @author: Grzegorz Mirek
*/
class DefaultScreenTapListener : public BaseScreenTapListener {
protected:
	void onScreenTap(const Leap::ScreenTapGesture& screenTap) override;
};

#endif