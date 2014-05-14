#ifndef STANDARD_OUTPUT_SWIPE_LISTENER_HPP
#define STANDARD_OUTPUT_SWIPE_LISTENER_HPP

#include <iostream>
#include "BaseSwipeListener.hpp"

/*
 * Prints Swipe events to standard output.
 * @author: Grzegorz Mirek
*/
class StandardOutputSwipeListener : public BaseSwipeListener {
public:
	void onLeftSwipe(const Leap::SwipeGesture& screenTap);
	void onRightSwipe(const Leap::SwipeGesture& screenTap);
	void onUpSwipe(const Leap::SwipeGesture& screenTap);
	void onDownSwipe(const Leap::SwipeGesture& screenTap);
};

#endif