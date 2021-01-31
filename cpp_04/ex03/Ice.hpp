#pragma once

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &);
	virtual ~Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
	Ice &operator=(Ice const &);
};

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
