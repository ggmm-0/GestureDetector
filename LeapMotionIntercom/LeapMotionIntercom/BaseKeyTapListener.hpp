#ifndef BASE_KEY_TAP_LISTENER_HPP
#define BASE_KEY_TAP_LISTENER_HPP

#include "AbstractGestureListener.hpp"

/*
 * Abstract class that is designed to be base class for implementing concrete KeyTap listeners.
 * @author: Grzegorz Mirek
*/
class BaseKeyTapListener : public AbstractGestureListener {
protected:
	Leap::Gesture::Type getGestureType();
public:
	void onGestureDetected(const Leap::Gesture&);
	virtual void onKeyTap(const Leap::KeyTapGesture& keyTap) = 0;
};

#endif