#include "BaseScreenTapListener.hpp"

using namespace Leap;

Gesture::Type BaseScreenTapListener::getGestureType() {
	return Gesture::Type::TYPE_SCREEN_TAP;
}

void BaseScreenTapListener::onGestureDetected(const Gesture& gesture) {
	onScreenTap(ScreenTapGesture(gesture));
}