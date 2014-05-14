#ifndef DEFAULT_CONFIGURATION_HPP
#define DEFAULT_CONFIGURATION_HPP

#include <memory>
#include "Configuration.hpp"
#include "StandardOutputKeyTapListener.hpp"
#include "StandardOutputScreenTapListener.hpp"
#include "StandardOutputSwipeListener.hpp"

/*
 * Default implementation of Application's Configuration interface.
 * @author: Grzegorz Mirek
*/
class DefaultConfiguration : public Configuration {
private:
	std::vector<std::shared_ptr<AbstractGestureListener>> listeners;
public:
	DefaultConfiguration();
	std::vector<std::shared_ptr<AbstractGestureListener>> getGestureListeners();
private:
	void createGestureListeners();
};

#endif