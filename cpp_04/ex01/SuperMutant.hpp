#pragma once
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &);
	SuperMutant(int hp, std::string const & type);
	~SuperMutant();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	SuperMutant &operator=(const SuperMutant&);
};

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &obj) : Enemy(obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type) {
	// std::cout << "HP: " << hp << " Type: " << type << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &obj) {
	Enemy::operator=(obj);
	return *this;
}

std::string SuperMutant::getType() const {
	return Enemy::getType();
}

int SuperMutant::getHP() const {
	return Enemy::getHP();
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}