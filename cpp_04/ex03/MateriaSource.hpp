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
