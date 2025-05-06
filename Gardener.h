#pragma once

#include "FlowerBouquet.h"
#include "Person.h"

class Gardener : public Person
{
private:

public:
	Gardener(std::string name);
	FlowerBouquet* prepareBouquet(std::vector<std::string> bouquet);

};
