#pragma once

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &);
	virtual ~Cure();
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
	Cure &operator=(Cure const &);
};
