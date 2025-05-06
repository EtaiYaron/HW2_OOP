#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name)
{
	this->grower = grower;
}

FlowerBouquet* Wholesaler::acceptOrder(std::vector<std::string> bouquet)
{

}

