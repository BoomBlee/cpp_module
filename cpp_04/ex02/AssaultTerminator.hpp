#pragma once

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(){std::cout << "* teleports from space *" << std::endl;}
	AssaultTerminator(const AssaultTerminator &obj);
	virtual ~AssaultTerminator() {std::cout << "I’ll be back..." << std::endl;}
	ISpaceMarine* clone() const {return new AssaultTerminator(*this);};
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	ISpaceMarine &operator=(const AssaultTerminator&obj) {*this=obj; return *this;}
};

// ISpaceMarine &AssaultTerminator::operator=(const AssaultTerminator &obj) {
// 	// *this = obj;
// 	return *this;
// }

AssaultTerminator::AssaultTerminator(const AssaultTerminator &obj) {
	*this = obj;
}

// ISpaceMarine* clone() const {
// 	ISpaceMarine* clone = new AssaultTerminator;
// 	// clone = this;
// 	return clone;
// }

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
