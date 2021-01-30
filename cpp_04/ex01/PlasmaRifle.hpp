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

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	// std::cout << "Default constructor called" << std::endl;

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage) {
	// std::cout << name << "created" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {
	// std::cout << "Destructor called" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &obj) {
	AWeapon::operator=(obj);
	return *this;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

int PlasmaRifle::getAPCost() const {
	return AWeapon::getAPCost();
}

int PlasmaRifle::getDamage() const {
	return AWeapon::getDamage();
}