#pragma once

#include <iostream>

class Enemy
{
private:
	int hp;
	std::string type;
public:
	Enemy();
	Enemy(const Enemy &);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	Enemy &operator=(const Enemy&);
};

Enemy::Enemy() {
	// std::cout << "Default constructor called" << std::endl;
}

Enemy::Enemy(const Enemy &obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) {
	// std::cout << "HP: " << hp << " Type: " << type << std::endl;
}

Enemy::~Enemy() {
	// std::cout << "Destructor called" << std::endl;
}

Enemy &Enemy::operator=(const Enemy &obj) {
	type = obj.type;
	hp = obj.hp;
	return *this;
}

std::string Enemy::getType() const {
	return type;
}

int Enemy::getHP() const {
	return hp;
}

void Enemy::takeDamage(int damage) {
	if (damage < 1)
		return ;
	this->hp -= damage;
	// std::cout << "hp:" << hp << std::endl;
}