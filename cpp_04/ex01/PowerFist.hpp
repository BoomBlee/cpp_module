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

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
	// std::cout << "Default constructor called" << std::endl;
}

PowerFist::PowerFist(const PowerFist &obj) : AWeapon(obj) {
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
	AWeapon::operator=(obj);
	return *this;
}

void PowerFist::attack() const {
	
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

int PowerFist::getAPCost() const {
	return AWeapon::getAPCost();
}

int PowerFist::getDamage() const {
	return AWeapon::getDamage();
}