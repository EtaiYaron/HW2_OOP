#pragma once

#include "Grower.h"

class Wholesaler : Person
{
private:
	Grower* grower;

public:
	Wholesaler(std::string name, Grower* grower);
	FlowerBouquet* acceptOrder(std::vector<std::string> bouquet);

};
