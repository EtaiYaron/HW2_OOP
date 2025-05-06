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
	FlowerBouquet* flowers = wholesaler->acceptOrder(bouquet);
	std::cout << "Wholesaler " << this->wholesaler->getName() << " returns the flowers to Florist " << this->getName() << "." << std::endl;
	std::cout << "Florist " << this->getName() << " request flowers arrangement from Flower Arragnger " << this->flowerArranger->getName() << "." << std::endl;
	flowerArranger->arrangeFlowers(flowers);
	std::cout << "Flower Arranger " << this->flowerArranger->getName() << " returns arranged flowers to Florist " << this->getName() << "." << std::endl;
	std::cout << "Florist " << this->getName() << " fowards flowers to Delivery Person " << this->deliveryPerson->getName() << "." << std::endl;
	deliveryPerson->deliver(person, flowers);
}

