#pragma once

#include "Person.h"

class Grower;
class FlowerBouquet;

class Wholesaler : public Person
{
private:
	Grower* grower;

public:
	Wholesaler(std::string name, Grower* grower);
	FlowerBouquet* acceptOrder(std::vector<std::string> bouquet);

};
