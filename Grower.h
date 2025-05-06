#pragma once

#include "Person.h"

class Gardener;
class FlowerBouquet;

class Grower : public Person
{
private:
	Gardener* gardener;

public:
	Grower(std::string name, Gardener* gardener);
	FlowerBouquet* prepareOrder(std::vector<std::string> bouquet);

};
