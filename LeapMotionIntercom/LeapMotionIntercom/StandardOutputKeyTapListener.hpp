#ifndef STANDARD_OUTPUT_KEY_TAP_LISTENER_HPP
#define STANDARD_OUTPUT_KEY_TAP_LISTENER_HPP

#include <iostream>
#include "BaseKeyTapListener.hpp"

/*
 * Prints KeyTap events to standard output.
 * @author: Grzegorz Mirek
*/
class StandardOutputKeyTapListener : public BaseKeyTapListener {
public:
	void onKeyTap(const Leap::KeyTapGesture& keyTap);
};

#endif