#pragma once

#include "Florist.h"

class Person
{
private:
	std::string name;

public:
	Person(std::string name);

	void orderFlowers(Florist* florist, Person* person, std::vector<std::string> bouquet);
	void acceptFlowers(FlowerBouquet* bouquet);

};
