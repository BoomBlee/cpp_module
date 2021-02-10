#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &obj) : Enemy(obj){
	// std::cout << "Copy constructor called" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const & type) : Enemy(hp, type) {
	// std::cout << "HP: " << hp << " Type: " << type << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &obj) {
	Enemy::operator=(obj);
	return *this;
}

std::string RadScorpion::getType() const {
	return Enemy::getType();
}

int RadScorpion::getHP() const {
	return Enemy::getHP();
}

void RadScorpion::takeDamage(int damage) {
	Enemy::takeDamage(damage);
}