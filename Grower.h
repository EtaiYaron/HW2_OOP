#pragma once

#include "Gardener.h"

class Grower
{
private:
	Gardener* gardener;

public:
	FlowerBouquet* prepareOrder(std::vector<std::string> bouquet);

};
