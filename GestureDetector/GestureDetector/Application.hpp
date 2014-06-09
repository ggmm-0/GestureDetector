#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <memory>
#include <vector>
#include <algorithm>
#include "Leap.h"
#include "AbstractGestureListener.hpp"
#include "Configuration.hpp"

/*
 * Leap Motion application class.
 * @author: Grzegorz Mirek
*/
class Application {
private:
	std::shared_ptr<Configuration> configuration;
	Leap::Controller controller;
public:
	Application(std::shared_ptr<Configuration> configuration);
	void start();
	void end();
private:
	void addGestureListenersToController();
	void setControllerPolicyFlags();
	void removeGestureListenersFromController();
};

#endif