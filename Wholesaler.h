#pragma once

#include "Grower.h"

class Wholesaler
{
private:
	Grower* grower;

public:
	FlowerBouquet* acceptOrder(std::vector<std::string> bouquet);

};
