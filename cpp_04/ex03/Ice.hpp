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
