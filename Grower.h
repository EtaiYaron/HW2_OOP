#pragma once

#include "Gardener.h"

class Grower : Person
{
private:
	Gardener* gardener;

public:
	Grower(std::string name, Gardener* gardener);
	FlowerBouquet* prepareOrder(std::vector<std::string> bouquet);

};
