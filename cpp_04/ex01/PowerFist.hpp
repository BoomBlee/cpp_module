#pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &);
	PowerFist(std::string const & name, int apcost, int damage);
	~PowerFist();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const;
	PowerFist &operator=(const PowerFist&);
};
