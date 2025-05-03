#pragma once

#include "Wholesaler.h"
#include "FlowerArranger.h"

class Florist
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;

public:
	void acceptOrder(Person* person, std::vector<std::string> bouquet);

};
