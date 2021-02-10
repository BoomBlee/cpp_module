#include "AMateria.hpp"

AMateria::AMateria(const AMateria &obj) {
	*this = obj;
}

AMateria::AMateria(std::string const & type) : type(type), _xp(0) {
}

void AMateria::use(ICharacter& target) {
	(void)target;
	_xp += 10;
}

unsigned int AMateria::getXP() const {
	return _xp;
}

std::string const &AMateria::getType() const {
	return type;
}

AMateria &AMateria::operator=(AMateria const &obj) {
	type = obj.type;
	_xp = obj._xp;
	return *this;
}

AMateria::~AMateria() {

}
