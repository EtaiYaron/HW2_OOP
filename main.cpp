#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Gardener.h"
#include "Grower.h"


int main()
{
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");

	Gardener* gardener = new Gardener("Garett");
	Grower* grower = new Grower("Gray", gardener);
	DeliveryPerson* delivery = new DeliveryPerson("Dylan");
	Wholesaler* wholesaler = new Wholesaler("Watson", grower);
	FlowerArranger* flowerArranger = new FlowerArranger("Flora");
	Florist* florist = new Florist("Fred", wholesaler, flowerArranger, delivery);

	std::vector<std::string> v;
	v.push_back("Roses");
	v.push_back("Violets");
	v.push_back("Gladiolus");
	chris->orderFlowers(florist, robin, v);

	return 0;
}