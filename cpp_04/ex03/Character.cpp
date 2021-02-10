#include "Character.hpp"

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
	if (idx >-1 && idx < 4 && mass[idx]){
		mass[idx]->use(target);
	}
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
