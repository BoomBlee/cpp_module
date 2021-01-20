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

Human::Human()
{
}

Human::~Human()
{
}

const Brain &Human::getBrain(){
	return one;	
}

std::string Human::identify(){
	return one.identify();
}