#include "FlowerArranger.h"
#include <iostream>

FlowerArranger::FlowerArranger(std::string name) : Person(name)
{ }

void FlowerArranger::arrangeFlowers(FlowerBouquet* bouquet)
{
	std::cout << "Flower Arranger " << this->getName() << "arranges flowers." << std::endl;
	bouquet->arrange();
}