#include <iostream>
#include "Application.hpp"
#include "MappingConfiguration.hpp"

void waitForExit();

/*
 * @author: Grzegorz Mirek
*/
void main() {
	Application application(std::make_shared<MappingConfiguration>());
	application.start();
	waitForExit();
	application.end();
}

void waitForExit() {
	std::cout
		<< "Gesture Detector v1.0" 
		<< std::endl << std::endl
		<< "Press Enter to exit..." 
		<< std::endl;
	std::cin.get();
}