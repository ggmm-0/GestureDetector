#ifndef ABSTRACT_GESTURE_LISTENER_HPP
#define ABSTRACT_GESTURE_LISTENER_HPP

#include <chrono>
#include "Leap.h"

/*
 * Abstract class that implements common Gesture processing.
 * @author: Grzegorz Mirek
*/
class AbstractGestureListener : public Leap::Listener {
private:
	static const std::chrono::milliseconds MIN_TIME_DIFFERENCE_BETWEEN_CONSECUTIVE_GESTURES;
	std::chrono::time_point<std::chrono::system_clock, std::chrono::system_clock::duration> lastGestureTimestamp;
public:
	AbstractGestureListener();
	void onConnect(const Leap::Controller&) override;
	void onFrame(const Leap::Controller&) override;
protected:
	virtual void onGestureDetected(const Leap::Gesture&) = 0;
	virtual Leap::Gesture::Type getGestureType() = 0;
private:
	void invokeCallbackIfCorrectGestureDetected(const Leap::Gesture& gesture, const Leap::Frame& previousFrame);
	bool isCorrectGestureDetected(const Leap::Gesture& gesture, const Leap::Frame& previousFrame);
	bool isCorrectGestureType(const Leap::Gesture&);
	bool isNewGesture(const Leap::Gesture&, const Leap::Frame& previousFrame);
	bool AbstractGestureListener::isNotDuplicatedGesture();
	void processGestures(const Leap::Frame& currentFrame, const Leap::Frame& previousFrame);
};

#endif