#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *mass[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource&);
	virtual ~MateriaSource() {}
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
	MateriaSource &operator=(MateriaSource const &);
};

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		mass[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
	*this = obj;
}

void MateriaSource::learnMateria(AMateria* obj) {
	for (int i = 0; i < 4; i++)
		if (!mass[i]) {
			mass[i] = obj;
			break;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
		if (mass[i] && mass[i]->getType() == type)
			return mass[i];
	return NULL;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj) {
	for (int i = 0; i < 4; i++)
		mass[i] = obj.mass[i];
	return *this;
}
