#ifndef DEFAULT_SWIPE_LISTENER_HPP
#define DEFAULT_SWIPE_LISTENER_HPP

#include <iostream>
#include "BaseSwipeListener.hpp"

/*
 * Prints Swipe events to standard output.
 * @author: Grzegorz Mirek
*/
class DefaultSwipeListener : public BaseSwipeListener {
public:
	void onLeftSwipe(const Leap::SwipeGesture& screenTap);
	void onRightSwipe(const Leap::SwipeGesture& screenTap);
	void onUpSwipe(const Leap::SwipeGesture& screenTap);
	void onDownSwipe(const Leap::SwipeGesture& screenTap);
};

#endif