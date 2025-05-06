#include "Florist.h"
#include <iostream>

Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) :
	Person(name)
{
	this->wholesaler = wholesaler;
	this->flowerArranger = flowerArranger;
	this->deliveryPerson = deliveryPerson;
	
}

void Florist::acceptOrder(Person* person, std::vector<std::string> bouquet)
{
	std::cout << "Florist " << this->getName() << " fowards the request to wholesaler " << this-> wholesaler-> getName() << "." << std::endl;
	wholesaler->acceptOrder(bouquet);
}

