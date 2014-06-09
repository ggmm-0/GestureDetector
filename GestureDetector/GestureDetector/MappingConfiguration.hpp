#ifndef MAPPING_CONFIGURATION_HPP
#define MAPPING_CONFIGURATION_HPP

#include <memory>
#include "Configuration.hpp"
#include "MappingKeyTapListener.hpp"
#include "MappingScreenTapListener.hpp"
#include "MappingSwipeListener.hpp"

/*
 * Implementation of Application's Configuration interface.
 * This class creates listeners that maps controller's events to system key events.
 * @author: Grzegorz Mirek
*/
class MappingConfiguration : public Configuration {
private:
	std::vector<std::shared_ptr<AbstractGestureListener>> listeners;
public:
	MappingConfiguration();
	std::vector<std::shared_ptr<AbstractGestureListener>> getGestureListeners();
	Leap::Controller::PolicyFlag getPolicyFlag();
private:
	void createGestureListeners();
};

#endif