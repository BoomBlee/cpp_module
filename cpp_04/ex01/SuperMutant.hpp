#pragma once

#include "Enemy.hpp"

class SuperMutant : virtual public Enemy
{
private:
	int hp;
	std::string type;
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

SuperMutant::SuperMutant() {
	hp = 170;
	type = "SuperMutant";
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

SuperMutant::SuperMutant(int hp, std::string const & type) : hp(hp), type(type) {
	// std::cout << "HP: " << hp << " Type: " << type << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &obj) {
	type = obj.type;
	hp = obj.hp;
	return *this;
}

std::string SuperMutant::getType() const {
	return type;
}

int SuperMutant::getHP() const {
	return hp;
}

void SuperMutant::takeDamage(int damage) {
	if (damage < 4)
		return ;
	this->hp -= damage - 3;
}