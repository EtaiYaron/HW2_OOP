#include "FlowerBouquet.h"
#include <string>
#include <vector>

FlowerBouquet::FlowerBouquet(std::vector<std::string> bouquet) {
	this->bouquet = bouquet;
	this->is_arranged = false;
}

void FlowerBouquet::arrange() {
	is_arranged = true;
}

std::string FlowerBouquet::toString() {
	std::string s = "";
	for (std::string flower : bouquet)
	{
		s += flower + ", ";
	}
	s = s.substr(0, s.length() - 2);
	return s;
}