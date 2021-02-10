#pragma once

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	RadScorpion(int hp, std::string const & type);
	virtual ~RadScorpion();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	RadScorpion &operator=(const RadScorpion&);
};
