#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
	AMateria *mass[4];
	std::string type;
public:
	Character(std::string type);
	Character(ICharacter const &);
	virtual ~Character() {}
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	Character &operator=(Character const &);
};

Character::Character(std::string type) : type(type) {
	for (int i = 0; i < 4; i++)
		mass[i] = NULL;
}

Character &Character::operator=(Character const &obj) {
	for (int i = 0; i < 4; i++)
		mass[i] = obj.mass[i];
	type = obj.type;
	return *this;
}

Character::Character(ICharacter const &obj) {
	*this = obj;
}


void Character::use(int idx, ICharacter& target) {
	if (idx >-1 && idx < 4 && mass[idx])
		mass[idx]->use(target);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
		if (!mass[i]) {
			mass[i] = m;
			break;
		}
}

void Character::unequip(int idx) {
	if (idx >-1 && idx < 4 && mass[idx])
		mass[idx] = NULL;
}

std::string const &Character::getName() const {
	return type;
}
