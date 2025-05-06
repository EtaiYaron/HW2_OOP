#include "DeliveryPerson.h"
#include "FlowerBouquet.h"
#include "Person.h"

#include <iostream>

DeliveryPerson::DeliveryPerson(std::string name) : Person(name)
{ }

void DeliveryPerson::deliver(Person* person, FlowerBouquet* bouquet)
{
	std::cout << "Delivery Person " << this->getName() << " delivers flowers " << person->getName() << "." << std::endl;
	person->acceptFlowers(bouquet);
}