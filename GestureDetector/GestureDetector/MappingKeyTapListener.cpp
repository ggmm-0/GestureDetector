#include "MappingKeyTapListener.hpp"
#include "KeyEvent.hpp"

using namespace Leap;

void MappingKeyTapListener::onKeyTap(const KeyTapGesture& keyTap) {
	KeyEvent event(VK_RETURN);
	event.trigger();
}
