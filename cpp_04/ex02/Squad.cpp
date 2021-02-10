#include "Squad.hpp"

Squad::Squad() {
	count=0;
	units=nullptr;
}

Squad::~Squad() {
	for (int i = 0; i < count; i++)
		if (units[i])
			delete units[i];
}

ISquad &Squad::operator=(const ISquad&obj) {
	(void)obj;
	return *this;
}

int Squad::getCount() const {
	return count;
}

ISpaceMarine*  Squad::getUnit(int number) const {
	return units[number];
}

int Squad::push(ISpaceMarine *unit) {
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