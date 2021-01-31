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

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine &AssaultTerminator::operator=(const AssaultTerminator &obj) {
	(void)obj;
	return *this;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &obj) {
	*this = obj;
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
