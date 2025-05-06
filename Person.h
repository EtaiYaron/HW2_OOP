#pragma once

#include <string>
#include <vector>

class Florist;
class FlowerBouquet;

class Person
{
private:
	std::string name;

public:
	Person(std::string name);

	void orderFlowers(Florist* florist, Person* person, std::vector<std::string> bouquet);
	void acceptFlowers(FlowerBouquet* bouquet);
	std::string getName();
};
