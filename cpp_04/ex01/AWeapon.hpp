#pragma once

#include <iostream>

class AWeapon
{
private:
	std::string name;
	int AP;
	int damage;
public:
	AWeapon();
	AWeapon(const AWeapon &);
	AWeapon(std::string const & name, int apcost, int damage);
	~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	AWeapon &operator=(const AWeapon&);
};
