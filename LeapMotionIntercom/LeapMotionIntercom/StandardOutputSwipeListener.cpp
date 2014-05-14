#include "StandardOutputSwipeListener.hpp"

using namespace Leap;

void StandardOutputSwipeListener::onLeftSwipe(const SwipeGesture& swipe) {
	std::cout
		<< "Left swipe event has occured with id = "
		<< swipe.id()
		<< std::endl;
}

void StandardOutputSwipeListener::onRightSwipe(const SwipeGesture& swipe) {
	std::cout
		<< "Right swipe event has occured with id = "
		<< swipe.id()
		<< std::endl;
}

void StandardOutputSwipeListener::onUpSwipe(const SwipeGesture& swipe) {
	std::cout
		<< "Up swipe event has occured with id = "
		<< swipe.id()
		<< std::endl;
}

void StandardOutputSwipeListener::onDownSwipe(const SwipeGesture& swipe) {
	std::cout
		<< "Down swipe event has occured with id = "
		<< swipe.id()
		<< std::endl;
}