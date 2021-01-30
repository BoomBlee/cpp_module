#pragma once

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad
{
public:
	virtual ~Squad() {}
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
	ISquad &operator=(const ISquad&obj) {*this=obj; return *this;}
};

int Squad::getCount() const {
	return ISquad::getCount();
}

ISpaceMarine*  Squad::getUnit(int number) const {
	return ISquad::getUnit(number);
}

int Squad::push(ISpaceMarine *unit) {
	return ISquad::push(unit);
}
