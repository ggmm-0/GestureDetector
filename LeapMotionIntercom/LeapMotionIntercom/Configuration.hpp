#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <memory>
#include "AbstractGestureListener.hpp"
#include "Leap.h"

/*
 * Application Configuration interface.
 * @author: Grzegorz Mirek
*/
class Configuration {
public:
	virtual std::vector<std::shared_ptr<AbstractGestureListener>> getGestureListeners() = 0;
	virtual Leap::Controller::PolicyFlag getPolicyFlag() = 0;
};

#endif