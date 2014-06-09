#include "BaseKeyTapListener.hpp"

using namespace Leap;

Gesture::Type BaseKeyTapListener::getGestureType() {
	return Gesture::TYPE_KEY_TAP;
}

void BaseKeyTapListener::onGestureDetected(const Gesture& gesture) {
	onKeyTap(KeyTapGesture(gesture));
}