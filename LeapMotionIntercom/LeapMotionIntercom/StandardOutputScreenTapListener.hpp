#ifndef STANDARD_OUTPUT_SCREEN_TAP_LISTENER_HPP
#define STANDARD_OUTPUT_SCREEN_TAP_LISTENER_HPP

#include <iostream>
#include "BaseScreenTapListener.hpp"

/*
 * Prints ScreenTap events to standard output.
 * @author: Grzegorz Mirek
*/
class StandardOutputScreenTapListener : public BaseScreenTapListener {
public:
	void onScreenTap(const Leap::ScreenTapGesture& screenTap);
};

#endif