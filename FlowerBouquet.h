#pragma once

#include <string>
#include <vector>

class FlowerBouquet
{
private:
	std::vector<std::string> bouquet;
	bool is_arranged;

public:
	FlowerBouquet(std::vector<std::string> bouquet);
	void arrange();

};
