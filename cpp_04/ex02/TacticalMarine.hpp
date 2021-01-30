#pragma once

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(){std::cout << "Tactical Marine ready for battle!" << std::endl;}
	TacticalMarine(const TacticalMarine &obj);
	virtual ~TacticalMarine() {std::cout << "Aaargh..." << std::endl;}
	ISpaceMarine* clone() const {return new TacticalMarine(*this);};
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	ISpaceMarine &operator=(const TacticalMarine&obj);// {*this=obj; return *this;}
};

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &obj) {
	// *this = obj;
	return *this;
}

TacticalMarine::TacticalMarine(const TacticalMarine &obj) {
	*this = obj;
}

// ISpaceMarine* clone(){
// 	// TacticalMarine* clone = new TacticalMarine(this);

// 	return new TacticalMarine(*this);
// }

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}