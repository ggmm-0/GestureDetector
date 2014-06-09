#include "MappingSwipeListener.hpp"
#include "KeyEvent.hpp"

using namespace Leap;

void MappingSwipeListener::onLeftSwipe(const SwipeGesture& swipe) {
	KeyEvent event(VK_LEFT);
	event.trigger();
}

void MappingSwipeListener::onRightSwipe(const SwipeGesture& swipe) {
	KeyEvent event(VK_RIGHT);
	event.trigger();
}

void MappingSwipeListener::onUpSwipe(const SwipeGesture& swipe) {
	KeyEvent event(VK_UP);
	event.trigger();
}

void MappingSwipeListener::onDownSwipe(const SwipeGesture& swipe) {
	KeyEvent event(VK_DOWN);
	event.trigger();
}