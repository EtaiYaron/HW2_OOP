#pragma once

#include "FlowerBouquet.h"

class FlowerArranger : Person
{
private:

public:
	FlowerArranger(std::string name);
	void arrangeFlowers(FlowerBouquet* bouquet);

};
