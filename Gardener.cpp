#include "Gardener.h"
#include "FlowerBouquet.h"
#include <string>
#include <vector>

#include <iostream>

Gardener::Gardener(std::string name) : Person(name) {}

FlowerBouquet* Gardener::prepareBouquet(std::vector<std::string> bouquet)
{
	std::cout << "Gardener " << this->getName() << " prepares flowers." << std::endl;
	FlowerBouquet* flowerBouquet = new FlowerBouquet(bouquet);
	return flowerBouquet;
}