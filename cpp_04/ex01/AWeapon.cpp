#include "AWeapon.hpp"

AWeapon::AWeapon() {
	// std::cout << "Default constructor called" << std::endl;
}

AWeapon::AWeapon(const AWeapon &obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), AP(apcost), damage(damage) {
	// std::cout << name << "created with Damage: " << damage << " AP: " << AP << std::endl;
}

AWeapon::~AWeapon() {
	// std::cout << "Destructor called" << std::endl;
}

AWeapon &AWeapon::operator=(const AWeapon &obj) {
	name = obj.name;
	AP = obj.AP;
	damage = obj.damage;
	return *this;
}

std::string AWeapon::getName() const {
	return name;
}
int AWeapon::getAPCost() const {
	return AP;
}


int AWeapon::getDamage() const {
	return damage;
}
