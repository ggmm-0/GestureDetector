#include "MappingConfiguration.hpp"

using namespace Leap;

MappingConfiguration::MappingConfiguration() {
	createGestureListeners();
}

void MappingConfiguration::createGestureListeners() {
	listeners.push_back(std::make_shared<MappingKeyTapListener>());
	listeners.push_back(std::make_shared<MappingScreenTapListener>());
	listeners.push_back(std::make_shared<MappingSwipeListener>());
}

std::vector<std::shared_ptr<AbstractGestureListener>> MappingConfiguration::getGestureListeners() {
	return listeners;
}

Controller::PolicyFlag MappingConfiguration::getPolicyFlag() {
	return Controller::PolicyFlag::POLICY_BACKGROUND_FRAMES;
}