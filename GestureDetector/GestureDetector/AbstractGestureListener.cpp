#include "AbstractGestureListener.hpp"

using namespace Leap;

const std::chrono::milliseconds AbstractGestureListener::MIN_TIME_DIFFERENCE_BETWEEN_CONSECUTIVE_GESTURES = 
		std::chrono::milliseconds(350);

AbstractGestureListener::AbstractGestureListener() : lastGestureTimestamp(std::chrono::milliseconds(0)) {}

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

void AbstractGestureListener::invokeCallbackIfCorrectGestureDetected(const Gesture& gesture, 
																	 const Frame& previousFrame) {
	if (isCorrectGestureDetected(gesture, previousFrame)) {
		lastGestureTimestamp = std::chrono::system_clock::now();
		onGestureDetected(gesture);
	}
}

bool AbstractGestureListener::isCorrectGestureDetected(const Gesture& gesture, const Frame& previousFrame) {
	return isCorrectGestureType(gesture) &&
		   isNewGesture(gesture, previousFrame) &&
		   isNotDuplicatedGesture();
}

bool AbstractGestureListener::isCorrectGestureType(const Gesture& gesture) {
	return gesture.type() == getGestureType();
}

bool AbstractGestureListener::isNewGesture(const Gesture& gesture, const Frame& previousFrame) {
	auto previousGesture = previousFrame.gesture(gesture.id());
	return ! previousGesture.isValid();
}

bool AbstractGestureListener::isNotDuplicatedGesture() {
	auto currentTime = std::chrono::system_clock::now();
	std::chrono::milliseconds timeDifference = 
		std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastGestureTimestamp);
	return timeDifference >= MIN_TIME_DIFFERENCE_BETWEEN_CONSECUTIVE_GESTURES;
}