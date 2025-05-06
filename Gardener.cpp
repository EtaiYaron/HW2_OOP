#include "Gardener.h"
#include <iostream>

Gardener::Gardener(std::string name) : Person(name) {}

FlowerBouquet* Gardener::prepareBouquet(std::vector<std::string> bouquet)
{
	std::cout << "Gardener " << this->getName() << " prepares the flowers." << std::endl;
	FlowerBouquet* flowerBouquet = new FlowerBouquet(bouquet);
	return flowerBouquet;
}