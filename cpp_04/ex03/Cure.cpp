#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure* Cure::clone() const {
	return new Cure;
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << YELLOW << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}

Cure::Cure(Cure const &obj) {
	*this = obj;
}

Cure &Cure::operator=(Cure const &obj) {
	AMateria::operator=(obj);
	return *this;
}

Cure::~Cure() {
	
}