#include "BaseSwipeListener.hpp"

using namespace Leap;

Gesture::Type BaseSwipeListener::getGestureType() {
	return Gesture::TYPE_SWIPE;
}

void BaseSwipeListener::onGestureDetected(const Gesture& gesture) {
	SwipeGesture swipe = SwipeGesture(gesture);
	switch (calculateDirection(gesture)) {
	case LEFT:
		onLeftSwipe(swipe);
		break;
	case RIGHT:
		onRightSwipe(swipe);
		break;
	case UP:
		onUpSwipe(swipe);
		break;
	case DOWN:
		onDownSwipe(swipe);
		break;
	}
}

Direction BaseSwipeListener::calculateDirection(const SwipeGesture& swipe) {
	float horizontalSwipeValue = swipe.direction()[0];
	float verticalSwipeValue = swipe.direction()[1];
	return determineDirection(horizontalSwipeValue, verticalSwipeValue);
}

Direction BaseSwipeListener::determineDirection(float horizontalSwipeValue, float verticalSwipeValue) {
	if (isHorizontalSwipe(horizontalSwipeValue, verticalSwipeValue))
		return horizontalSwipeValue > 0 ? RIGHT : LEFT;
	return verticalSwipeValue > 0 ? UP : DOWN;
}

bool BaseSwipeListener::isHorizontalSwipe(float horizontalSwipeValue, float verticalSwipeValue) {
	return abs(horizontalSwipeValue) > abs(verticalSwipeValue);
}