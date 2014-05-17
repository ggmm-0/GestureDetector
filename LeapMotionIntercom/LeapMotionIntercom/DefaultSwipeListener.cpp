#include "DefaultSwipeListener.hpp"

using namespace Leap;

void DefaultSwipeListener::onLeftSwipe(const SwipeGesture& swipe) {
	std::cout
		<< "Left swipe event has occured with id = "
		<< swipe.id()
		<< std::endl;
}

void DefaultSwipeListener::onRightSwipe(const SwipeGesture& swipe) {
	std::cout
		<< "Right swipe event has occured with id = "
		<< swipe.id()
		<< std::endl;
}

void DefaultSwipeListener::onUpSwipe(const SwipeGesture& swipe) {
	std::cout
		<< "Up swipe event has occured with id = "
		<< swipe.id()
		<< std::endl;
}

void DefaultSwipeListener::onDownSwipe(const SwipeGesture& swipe) {
	std::cout
		<< "Down swipe event has occured with id = "
		<< swipe.id()
		<< std::endl;
}