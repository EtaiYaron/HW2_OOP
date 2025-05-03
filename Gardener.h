#pragma once

#include "FlowerBouquet.h"

class Gardener : Person
{
private:

public:
	Gardener(std::string name);
	FlowerBouquet* prepareBouquet(std::vector<std::string> bouquet);

};
