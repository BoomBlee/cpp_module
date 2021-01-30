#pragma once

#include "ISpaceMarine.hpp"
#include <iostream>

class ISquad
{
private:
	int count=0;
	ISpaceMarine **units;
public:
	virtual ~ISquad() {
		for (size_t i = 0; i < count; i++)
		{
			if (units[i])
				delete units[i];
		}
		
	}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

int ISquad::getCount() const {
	return count;
}

int ISquad::push(ISpaceMarine* unit) {
	if (!unit)
		return count;
	else {
		for (int i=0; i < count; i++) {
			if (units[i] == unit)
				return count;
		}
		ISpaceMarine **tmp = units;
		delete [] units;
		units = new ISpaceMarine*[count + 1];
		for (int i = 0; i < count; i++)
			units[i] = tmp[i];
		units[count] = unit;
	}
	return ++count;
}

ISpaceMarine* ISquad::getUnit(int number) const {
	return units[number];
}