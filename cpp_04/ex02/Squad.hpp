#pragma once

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad
{
private:
	int count;
	ISpaceMarine **units;
public:
	Squad();
	virtual ~Squad();
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
	ISquad &operator=(const ISquad&obj);
};
