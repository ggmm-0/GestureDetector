#include "AbstractGestureListener.hpp"

using namespace Leap;

void AbstractGestureListener::onConnect(const Controller& controller) {
	controller.enableGesture(getGestureType());
}

void AbstractGestureListener::onFrame(const Controller& controller) {
	const auto frame = controller.frame(); 
	const auto previousFrame = controller.frame(1);
	processGestures(frame, previousFrame);
}

void AbstractGestureListener::processGestures(const Frame& currentFrame, const Frame& previousFrame) {
	auto gestures = currentFrame.gestures();
	for (int i = 0; i < gestures.count(); ++i)
		invokeCallbackIfCorrectGestureDetected(gestures[i], previousFrame);
}

void AbstractGestureListener::invokeCallbackIfCorrectGestureDetected(const Gesture& gesture, const Frame& previousFrame) {
	if (isProperGestureType(gesture) && isNewGesture(gesture, previousFrame))
		onGestureDetected(gesture);
}

bool AbstractGestureListener::isProperGestureType(const Gesture& gesture) {
	return gesture.type() == getGestureType();
}

bool AbstractGestureListener::isNewGesture(const Gesture& gesture, const Frame& previousFrame) {
	auto previousGesture = previousFrame.gesture(gesture.id());
	return ! previousGesture.isValid();
}