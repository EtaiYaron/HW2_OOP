#include "Person.h"
#include <iostream>

Person::Person(std::string name)
{
	this->name = name;
}

void Person::orderFlowers(Florist* florist, Person* person, std::vector<std::string> bouquet)
{
	std::string s = "";
	for (std::string flower : bouquet)
	{
		s += flower + ", ";
	}
	s = s.substr(0, s.length() - 2);
	std::cout << person->name << " orders flowers from Florist " << florist-> getName() << ": " << s  << "." << std::endl;
	florist->acceptOrder(person, bouquet);
}

void Person::acceptFlowers(FlowerBouquet* bouquet)
{
	std::string s = bouquet->toString();
	std::cout << this->getName() << " accepts the flowers: "<< s << "." << std::endl;
	delete bouquet;
}

std::string Person::getName()
{
	return name;
}