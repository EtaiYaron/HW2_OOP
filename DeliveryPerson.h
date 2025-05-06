#pragma once

#include "Person.h"

class FlowerBouquet;

class DeliveryPerson : public Person
{
private:

public:
	DeliveryPerson(std::string name);
	void deliver(Person* person, FlowerBouquet* bouquet);

};
