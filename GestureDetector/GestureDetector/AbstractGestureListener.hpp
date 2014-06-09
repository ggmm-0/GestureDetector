#ifndef ABSTRACT_GESTURE_LISTENER_HPP
#define ABSTRACT_GESTURE_LISTENER_HPP

#include "Leap.h"

/*
 * Abstract class that implements common Gesture processing.
 * @author: Grzegorz Mirek
*/
class AbstractGestureListener : public Leap::Listener {
public:
	void onConnect(const Leap::Controller&) override;
	void onFrame(const Leap::Controller&) override;
protected:
	virtual void onGestureDetected(const Leap::Gesture&) = 0;
	virtual Leap::Gesture::Type getGestureType() = 0;
private:
	bool isProperGestureType(const Leap::Gesture&);
	bool isNewGesture(const Leap::Gesture&, const Leap::Frame& previousFrame);
	void processGestures(const Leap::Frame& currentFrame, const Leap::Frame& previousFrame);
};

#endif