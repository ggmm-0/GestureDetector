#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <memory>
#include "AbstractGestureListener.hpp"

/*
 * Application Configuration interface.
 * @author: Grzegorz Mirek
*/
class Configuration {
public:
	virtual std::vector<std::shared_ptr<AbstractGestureListener>> getGestureListeners() = 0;
};

#endif