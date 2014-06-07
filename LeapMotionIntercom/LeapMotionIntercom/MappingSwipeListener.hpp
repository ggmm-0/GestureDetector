#ifndef MAPPING_SWIPE_LISTENER_HPP
#define MAPPING_SWIPE_LISTENER_HPP

#include <iostream>
#include "BaseSwipeListener.hpp"

/*
 * Maps SwipeTap events to system's arrow key (VK_LEFT, VK_RIGHT, VK_UP or VK_DOWN) event.
 * @author: Grzegorz Mirek
*/
class MappingSwipeListener : public BaseSwipeListener {
public:
	void onLeftSwipe(const Leap::SwipeGesture& screenTap);
	void onRightSwipe(const Leap::SwipeGesture& screenTap);
	void onUpSwipe(const Leap::SwipeGesture& screenTap);
	void onDownSwipe(const Leap::SwipeGesture& screenTap);
};

#endif