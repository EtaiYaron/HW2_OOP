#pragma once

#include "Person.h"

class FlowerBouquet;

class Gardener : public Person
{
private:

public:
	Gardener(std::string name);
	FlowerBouquet* prepareBouquet(std::vector<std::string> bouquet);

};
