#pragma once

#include <iostream>

#define RED "\33[1;31m"
#define GREEN "\33[1;32m"
#define YELLOW "\33[1;33m"
#define BLUE "\33[1;34m"
#define CIAN "\33[1;36m"
#define RESET "\33[0m"

class Pony
{
private:
	size_t legs;
	size_t heads;
	size_t tails;
	std::string color;
public:
	void deleteLeg();
	void setColor(std::string);
	Pony(size_t , size_t, size_t, std::string);
	~Pony();
};
