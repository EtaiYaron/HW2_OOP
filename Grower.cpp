#include "Grower.h"
#include "Gardener.h"
#include "FlowerBouquet.h"

#include <iostream>

Grower::Grower(std::string name, Gardener* gardener) : Person(name)
{
	this->gardener = gardener;
}


FlowerBouquet* Grower::prepareOrder(std::vector<std::string> bouquet)
{
	std::cout << "Grower " << this->getName() << " forwards the request to Gardener "<< this->gardener->getName() << "." << std::endl;
	FlowerBouquet* flowerBouquet = gardener->prepareBouquet(bouquet);
	std::cout << "Gardener " << this->gardener -> getName() << " returns flowers to Grower "<< this->getName() << "." << std::endl;
	return flowerBouquet;
}