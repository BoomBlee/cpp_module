#include <iostream>

class Pony
{
private:
	size_t legs;
	std::string color;
	size_t heads;
	size_t tails;
public:
	void deleteLeg();
	void setColor(std::string);
	// void mutation(size_t, size_t, size_t, std::string);
	Pony(size_t , size_t, size_t, std::string);
	~Pony();
};
