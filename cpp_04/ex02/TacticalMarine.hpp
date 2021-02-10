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
