#pragma once

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure() {}
	Cure(Cure const &);
	virtual ~Cure();
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
	Cure &operator=(Cure const &);
};

Cure* Cure::clone() const {
	return new Cure;
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << CIAN << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}

Cure::Cure(Cure const &obj) {
	*this = obj;
}

Cure &Cure::operator=(Cure const &obj) {
	AMateria::operator=(obj);
	return *this;
}
