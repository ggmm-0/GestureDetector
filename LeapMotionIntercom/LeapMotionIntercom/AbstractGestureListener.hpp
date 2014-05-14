#ifndef ABSTRACT_GESTURE_LISTENER_HPP
#define ABSTRACT_GESTURE_LISTENER_HPP

#include "Leap.h"

/*
 * Abstract class that implements common Gesture processing.
 * @author: Grzegorz Mirek
*/
class AbstractGestureListener : public Leap::Listener {
private:
	bool isProperGestureType(const Leap::Gesture&);
	bool isNewGesture(const Leap::Gesture&, const Leap::Frame& previousFrame);
	void processGestures(const Leap::Frame& currentFrame, const Leap::Frame& previousFrame);
protected:
	virtual Leap::Gesture::Type getGestureType() = 0;
public:
	void onConnect(const Leap::Controller&);
	void onFrame(const Leap::Controller&);
	virtual void onGestureDetected(const Leap::Gesture&) = 0;
};

#endif