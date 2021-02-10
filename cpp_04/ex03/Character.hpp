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
