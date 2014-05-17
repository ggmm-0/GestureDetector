#include "DefaultConfiguration.hpp"

DefaultConfiguration::DefaultConfiguration() {
	createGestureListeners();
}

void DefaultConfiguration::createGestureListeners() {
	listeners.push_back(std::make_shared<DefaultKeyTapListener>());
	listeners.push_back(std::make_shared<DefaultScreenTapListener>());
	listeners.push_back(std::make_shared<DefaultSwipeListener>());
}

std::vector<std::shared_ptr<AbstractGestureListener>> DefaultConfiguration::getGestureListeners() {
	return listeners;
}