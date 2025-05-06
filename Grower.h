#pragma once

#include "Gardener.h"
#include "Person.h"

class Grower : public Person
{
private:
	Gardener* gardener;

public:
	Grower(std::string name, Gardener* gardener);
	FlowerBouquet* prepareOrder(std::vector<std::string> bouquet);

};
