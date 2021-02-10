#pragma once
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &);
	SuperMutant(int hp, std::string const & type);
	~SuperMutant();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	SuperMutant &operator=(const SuperMutant&);
};
