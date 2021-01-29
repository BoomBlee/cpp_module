#pragma once

#include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
private:
	int hp;
	std::string type;
public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	RadScorpion(int hp, std::string const & type);
	~RadScorpion();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	RadScorpion &operator=(const RadScorpion&);
};

RadScorpion::RadScorpion() {
	hp = 80;
	type = "RadScorpion";
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

RadScorpion::RadScorpion(int hp, std::string const & type) : hp(hp), type(type) {
	// std::cout << "HP: " << hp << " Type: " << type << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &obj) {
	type = obj.type;
	hp = obj.hp;
	return *this;
}

std::string RadScorpion::getType() const {
	return type;
}

int RadScorpion::getHP() const {
	return hp;
}

void RadScorpion::takeDamage(int damage) {
	if (damage < 4)
		return ;
	this->hp -= damage;
}