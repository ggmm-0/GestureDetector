#ifndef MAPPING_KEY_TAP_LISTENER_HPP
#define MAPPING_KEY_TAP_LISTENER_HPP

#include <iostream>
#include "BaseKeyTapListener.hpp"

/*
 * Maps KeyTap events to system's ENTER (VK_RETURN) event.
 * @author: Grzegorz Mirek
*/
class MappingKeyTapListener : public BaseKeyTapListener {
public:
	void onKeyTap(const Leap::KeyTapGesture& keyTap);
};

#endif