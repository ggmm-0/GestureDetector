#ifndef DEFAULT_CONFIGURATION_HPP
#define DEFAULT_CONFIGURATION_HPP

#include <memory>
#include "Configuration.hpp"
#include "DefaultKeyTapListener.hpp"
#include "DefaultScreenTapListener.hpp"
#include "DefaultSwipeListener.hpp"

/*
 * Default implementation of Application's Configuration interface.
 * This class uses default listeners that print events to standard output.
 * @author: Grzegorz Mirek
*/
class DefaultConfiguration : public Configuration {
private:
	std::vector<std::shared_ptr<AbstractGestureListener>> listeners;
public:
	DefaultConfiguration();
	std::vector<std::shared_ptr<AbstractGestureListener>> getGestureListeners();
	Leap::Controller::PolicyFlag getPolicyFlag();
private:
	void createGestureListeners();
};

#endif