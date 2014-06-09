#ifndef DEFAULT_KEY_TAP_LISTENER_HPP
#define DEFAULT_KEY_TAP_LISTENER_HPP

#include <iostream>
#include "BaseKeyTapListener.hpp"

/*
 * Prints KeyTap events to standard output.
 * @author: Grzegorz Mirek
*/
class DefaultKeyTapListener : public BaseKeyTapListener {
protected:
	void onKeyTap(const Leap::KeyTapGesture& keyTap) override;
};

#endif