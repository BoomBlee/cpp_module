#pragma once

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	PlasmaRifle(std::string const & name, int apcost, int damage);
	~PlasmaRifle();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	void attack() const;
	PlasmaRifle &operator=(const PlasmaRifle&);
};
