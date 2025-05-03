#pragma once

#include "Person.h"
#include "FlowerBouquet.h"

class DeliveryPerson : Person
{
private:

public:
	DeliveryPerson(std::string name);
	void deliver(Person* person, FlowerBouquet* bouquet);

};
