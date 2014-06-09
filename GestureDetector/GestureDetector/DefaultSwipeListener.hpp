#ifndef DEFAULT_SWIPE_LISTENER_HPP
#define DEFAULT_SWIPE_LISTENER_HPP

#include <iostream>
#include "BaseSwipeListener.hpp"

/*
 * Prints Swipe events to standard output.
 * @author: Grzegorz Mirek
*/
class DefaultSwipeListener : public BaseSwipeListener {
protected:
	void onLeftSwipe(const Leap::SwipeGesture& screenTap) override;
	void onRightSwipe(const Leap::SwipeGesture& screenTap) override;
	void onUpSwipe(const Leap::SwipeGesture& screenTap) override;
	void onDownSwipe(const Leap::SwipeGesture& screenTap) override;
};

#endif