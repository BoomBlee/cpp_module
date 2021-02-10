#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice* Ice::clone() const {
	return new Ice;
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << CIAN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}

Ice::Ice(const Ice &obj) {
	*this = obj;
}

Ice &Ice::operator=(Ice const &obj) {
	AMateria::operator=(obj);
	return *this;
}

Ice::~Ice() {
	
}
