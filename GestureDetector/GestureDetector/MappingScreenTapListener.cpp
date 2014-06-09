#include "MappingScreenTapListener.hpp"
#include "LeftMouseButtonEvent.hpp"

using namespace Leap;

void MappingScreenTapListener::onScreenTap(const ScreenTapGesture& screenTap) {
	LeftMouseButtonEvent event;
	event.trigger();
}
