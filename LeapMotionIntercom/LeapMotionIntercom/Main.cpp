#include <iostream>
#include "Application.hpp"
#include "DefaultConfiguration.hpp"

void waitForExit();

/*
 * @author: Grzegorz Mirek
*/
void main() {
	Application application(std::make_shared<DefaultConfiguration>());
	application.start();
	waitForExit();
	application.end();
}

void waitForExit() {
	std::cout << "Press Enter to exit..." << std::endl;
	std::cin.get();
}