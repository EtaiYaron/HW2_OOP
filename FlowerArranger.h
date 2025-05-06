#pragma once

#include "Person.h"

class FlowerBouquet;

class FlowerArranger : public Person
{
private:

public:
	FlowerArranger(std::string name);
	void arrangeFlowers(FlowerBouquet* bouquet);

};
