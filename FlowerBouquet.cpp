#include "FlowerBouquet.h"

FlowerBouquet::FlowerBouquet(std::vector<std::string> bouquet) {
	this->bouquet = bouquet;
	this->is_arranged = false;
}

void FlowerBouquet::arrange() {
	is_arranged = true;
}