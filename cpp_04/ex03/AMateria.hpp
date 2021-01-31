#pragma once

#include "ICharacter.hpp"
#include <iostream>

#define RED "\33[1;31m"
#define GREEN "\33[1;32m"
#define YELLOW "\33[1;33m"
#define BLUE "\33[1;34m"
#define CIAN "\33[1;36m"
#define RESET "\33[0m"

class AMateria
{
private:
	std::string type;
	unsigned int _xp;
public:
	AMateria() {}
	AMateria(const AMateria &);
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	AMateria &operator=(AMateria const &obj);
};

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
