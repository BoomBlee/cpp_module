#pragma once

#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{
private:
	std::string name;
	int damage;
	int AP;
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	PlasmaRifle(std::string const & name, int apcost, int damage);
	~PlasmaRifle();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const;
	PlasmaRifle &operator=(const PlasmaRifle&);
};

PlasmaRifle::PlasmaRifle() {
	// std::cout << "Default constructor called" << std::endl;
	name = "Plasma Rifle";
	damage = 21;
	AP = 5;
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
	name = obj.name;
	damage = obj.damage;
	AP = obj.AP;
	return *this;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
