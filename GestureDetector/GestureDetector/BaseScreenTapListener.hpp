#ifndef BASE_SCREEN_TAP_LISTENER_HPP
#define BASE_SCREEN_TAP_LISTENER_HPP

#include "AbstractGestureListener.hpp"

/*
 * Abstract class that is designed to be base class for implementing concrete ScreenTap listeners.
 * @author: Grzegorz Mirek
*/
class BaseScreenTapListener : public AbstractGestureListener {
protected:
	void onGestureDetected(const Leap::Gesture&) override;
	Leap::Gesture::Type getGestureType() override;
	virtual void onScreenTap(const Leap::ScreenTapGesture& screenTap) = 0;
};

#endif