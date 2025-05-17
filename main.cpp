#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Gardener.h"
#include "Grower.h"
#include <iostream>


int main()
{
	// Create instances of each class
	Person* from = new Person("Chris");
	Person* to = new Person("Robin");
	Gardener* gardener = new Gardener("Garret");
	Grower* grower = new Grower("Grey", gardener);
	DeliveryPerson* delivery = new DeliveryPerson("Dylan");
	Wholesaler* wholesaler = new Wholesaler("Watson", grower);
	FlowerArranger* flowerArranger = new FlowerArranger("Flora");
	Florist* florist = new Florist("Fred", wholesaler, flowerArranger, delivery);

	std::vector<std::string> v;
	v.push_back("Roses");
	v.push_back("Violets");
	v.push_back("Gladiolus");


	from->orderFlowers(florist, to, v);

	delete from;
	delete to;
	delete gardener;
	delete grower;
	delete delivery;
	delete wholesaler;
	delete flowerArranger;
	delete florist;

	return 0;
}