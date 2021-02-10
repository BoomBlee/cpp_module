#pragma once

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &obj);
	virtual ~AssaultTerminator();
	ISpaceMarine* clone() const {return new AssaultTerminator(*this);};
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	ISpaceMarine &operator=(const AssaultTerminator &obj);
};
