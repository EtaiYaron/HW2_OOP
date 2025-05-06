#include "Wholesaler.h"
#include <iostream>

Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name)
{
	this->grower = grower;
}

FlowerBouquet* Wholesaler::acceptOrder(std::vector<std::string> bouquet)
{
	std::cout << "Wholesaler" << this->getName() << "fowards the request to Grower " << this->grower->getName() << "." << std::endl;
	FlowerBouquet* flowers =  grower->prepareOrder(bouquet);
	std::cout << "Grower " << this->grower->getName() << " returns the flowers to Wholesaler " << this->getName() << "." << std::endl;
	return flowers;
}

