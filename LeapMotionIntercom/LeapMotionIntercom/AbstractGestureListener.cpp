#include "AbstractGestureListener.hpp"

using namespace Leap;

void AbstractGestureListener::onConnect(const Controller& controller) {
	controller.enableGesture(getGestureType());
}

void AbstractGestureListener::onFrame(const Controller& controller) {
	const Frame frame = controller.frame(); 
	const Frame previousFrame = controller.frame(1);
	processGestures(frame, previousFrame);
}

void AbstractGestureListener::processGestures(const Frame& currentFrame, const Frame& previousFrame) {
	GestureList gestures = currentFrame.gestures();
	for (int i = 0; i < gestures.count(); ++i) {
		Gesture gesture = gestures[i];
		if (isProperGestureType(gesture) &&
			isNewGesture(gesture, previousFrame))
			onGestureDetected(gesture);
	}
}

bool AbstractGestureListener::isProperGestureType(const Gesture& gesture) {
	return gesture.type() == getGestureType();
}

bool AbstractGestureListener::isNewGesture(const Gesture& gesture, const Frame& previousFrame) {
	Gesture previousGesture = previousFrame.gesture(gesture.id());
	return ! previousGesture.isValid();
}