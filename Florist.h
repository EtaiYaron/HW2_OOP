#pragma once

#include "Wholesaler.h"
#include "FlowerArranger.h"

class Florist : Person
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;

public:
	Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
	void acceptOrder(Person* person, std::vector<std::string> bouquet);

};
