#include "Grower.h"
#include <iostream>

Grower::Grower(std::string name, Gardener* gardener) : Person(name)
{
	this->gardener = gardener;
}


FlowerBouquet* Grower::prepareOrder(std::vector<std::string> bouquet)
{
	std::cout << "Grower " << this->getName() << " fowards the request to Gardner "<< this->gardener->getName() << "." << std::endl;
	FlowerBouquet* flowerBouquet = gardener->prepareBouquet(bouquet);
	std::cout << "Gardner " << this->gardener -> getName() << " returns the flowers to Grower "<< this->getName() << "." << std::endl;
	return flowerBouquet;
}