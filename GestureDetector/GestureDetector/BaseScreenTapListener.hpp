#ifndef BASE_SCREEN_TAP_LISTENER_HPP
#define BASE_SCREEN_TAP_LISTENER_HPP

#include "AbstractGestureListener.hpp"

/*
 * Abstract class that is designed to be base class for implementing concrete ScreenTap listeners.
 * @author: Grzegorz Mirek
*/
class BaseScreenTapListener : public AbstractGestureListener {
public:
	void onGestureDetected(const Leap::Gesture&);
	virtual void onScreenTap(const Leap::ScreenTapGesture& screenTap) = 0;
protected:
	Leap::Gesture::Type getGestureType();
};

#endif