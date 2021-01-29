#pragma once

#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{
private:
	std::string name;
	int damage;
	int AP;
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

PowerFist::PowerFist() {
	// std::cout << "Default constructor called" << std::endl;
	name = "Plasma Rifle";
	damage = 21;
	AP = 5;
}

PowerFist::PowerFist(const PowerFist &obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
	// std::cout << name << "created" << std::endl;
}

PowerFist::~PowerFist() {
	// std::cout << "Destructor called" << std::endl;
}

PowerFist &PowerFist::operator=(const PowerFist &obj) {
	name = obj.name;
	damage = obj.damage;
	AP = obj.AP;
	return *this;
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
