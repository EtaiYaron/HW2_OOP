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
	std::string str = "";
	std::cout << "Give me the person's name that sends the flowers" << std::endl;
	std::cin >> str;
	Person* from = new Person(str);
	std::cout << "Give me the person's name that receives the flowers" << std::endl;
	std::cin >> str;
	Person* to = new Person(str);

	std::cout << "Give me the name of the flower Gardener" << std::endl;
	std::cin >> str;
	Gardener* gardener = new Gardener(str);
	std::cout << "Give me the name of the flower Grower" << std::endl;
	std::cin >> str;
	Grower* grower = new Grower(str, gardener);
	std::cout << "Give me the name of the flower Delivery Person" << std::endl;
	std::cin >> str;
	DeliveryPerson* delivery = new DeliveryPerson(str);
	std::cout << "Give me the name of the flower Wholesaler" << std::endl;
	std::cin >> str;
	Wholesaler* wholesaler = new Wholesaler(str, grower);
	std::cout << "Give me the name of the flower Arranger" << std::endl;
	std::cin >> str;
	FlowerArranger* flowerArranger = new FlowerArranger(str);
	std::cout << "Give me the name of the flower Florist" << std::endl;
	std::cin >> str;
	Florist* florist = new Florist(str, wholesaler, flowerArranger, delivery);

	std::vector<std::string> v;
	std::cout << "Give me the name of the flowers you want to send" << std::endl;
	std::cin >> str;
	while (str != "done")
	{
		v.push_back(str);
		std::cout << "Give me the name of the flowers you want to send (type 'done' when finished)" << std::endl;
		std::cin >> str;
	}
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