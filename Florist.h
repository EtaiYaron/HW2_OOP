#pragma once

#include <vector>
#include <string>
#include "Person.h"

class Wholesaler;
class FlowerArranger;
class DeliveryPerson;

class Florist : public Person
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;

public:
	Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
	void acceptOrder(Person* person, std::vector<std::string> bouquet);

};
