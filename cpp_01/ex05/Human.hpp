#include "Brain.hpp"

class Human
{
private:
	const Brain one;
public:
	Human();
	~Human();
	std::string identify();
	const Brain &getBrain();
};
