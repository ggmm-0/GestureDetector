#include "DefaultConfiguration.hpp"

DefaultConfiguration::DefaultConfiguration() {
	createGestureListeners();
}

void DefaultConfiguration::createGestureListeners() {
	listeners.push_back(std::make_shared<StandardOutputKeyTapListener>());
	listeners.push_back(std::make_shared<StandardOutputScreenTapListener>());
	listeners.push_back(std::make_shared<StandardOutputSwipeListener>());
}

std::vector<std::shared_ptr<AbstractGestureListener>> DefaultConfiguration::getGestureListeners() {
	return listeners;
}