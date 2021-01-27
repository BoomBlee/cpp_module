#include "Pony.hpp"

Pony::Pony(size_t leg, size_t heads, size_t tails, std::string color) : legs(leg), heads(heads), tails(tails), color(color)
{
	std::cout << GREEN << "Pony created with " << this->legs << " legs, " << this->heads << " heads, " << this->tails << " tails and " << this->color << " color." << RESET << std::endl;
}

Pony::~Pony()
{
	std::cout << RED << "Pony died with " << this->legs << " legs, " << this->heads << " heads, " << this->tails << " tails and " << this->color << " color." << RESET << std::endl;
}

void Pony::deleteLeg(){
	if (legs > 0) {
		this->legs--;
		std::cout << YELLOW << "Delete leg..." << RESET << std::endl;
	}
	else
		std::cout << this->legs << "It's impossible to remove the leg, pony legless" << std::endl;
	if (legs == 0)
		std::cout << "Pony without legs" << std::endl;
	std::cout << this->legs << " legs left" << std::endl;
}

void Pony::setColor(std::string col){
	color = col;
	std::cout << CIAN << "New color: " << RESET << this->color << std::endl;
}
