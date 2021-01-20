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

Pony::Pony(size_t leg, size_t heads, size_t tails, std::string color) : legs(leg), heads(heads), tails(tails), color(color)
{
	std::cout << "Pony created with " << this->legs << " legs, " << this->heads << " heads, " << this->tails << " tails and " << this->color << " color." << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony died with " << this->legs << " legs, " << this->heads << " heads, " << this->tails << " tails and " << this->color << " color." << std::endl;
}

// void Pony::mutation(size_t delLeg, size_t delHeads, size_t delTails, std::string){
// 	if (delLeg )
// }

void Pony::deleteLeg(){
	this->legs--;
	std::cout << this->legs << "legs left" << std::endl;
}

void Pony::setColor(std::string col){
	color = col;
	std::cout << "New color: " << this->color << std::endl;
}

// void Pony::deleteHeads(){
// 	this->legs--;
// 	std::cout << this->legs << "legs left" << std::endl;
// }

// void Pony::deleteTails(){
// 	this->legs--;
// 	std::cout << this->legs << "legs left" << std::endl;
// }