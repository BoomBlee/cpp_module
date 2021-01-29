#pragma once

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
private:
	std::string name;
	int AP;
	AWeapon *weapon;
public:
	Character();
	Character(const Character &);
	Character(std::string const & type);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	std::string displayMessange() const;
	Character &operator=(const Character &obj);
	std::ostream &operator<<(std::ostream &fd);
};

Character::Character() {
	// std::cout << "Default constructor called" << std::endl;
	AP = 40;
}

Character::Character(const Character &obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Character::Character(std::string const & name) : name(name) {
	// std::cout << "HP: " << hp << " Type: " << type << std::endl;
}

Character::~Character() {
	// std::cout << "Destructor called" << std::endl;
}

Character &Character::operator=(const Character &obj) {
	name = obj.name;
	AP = obj.AP;
	weapon = obj.weapon;
	return *this;
}

void Character::recoverAP() {
	if (AP + 10 > 40)
		AP = 40;
	else
		AP += 10;
}

void Character::attack(Enemy* enemy) {
	if (weapon)
		return ;
	std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
	if (AP - weapon->getAPCost() > 9) {
		AP -= weapon->getAPCost();
		enemy->takeDamage(weapon->getDamage());
		if (enemy->getHP() < 1)
			enemy->Enemy::~Enemy();
	}
}

void Character::equip(AWeapon* _weapon) {
	weapon = _weapon;
}

std::string Character::displayMessange() const {
	std::string str;
	// std::string strAP = std::to_string(AP);
	// std::cout << "res:" << std::to_string(AP) <<std::endl;
	if (!weapon)
		str = name + " has " + "40" + " AP and wields a " + weapon->getName();
	else
		str = name + " has " + "0000" + " AP and is unarmed";
	return str;
}

std::ostream	&operator<<(std::ostream &fd, const Character &obj) {
	return fd << obj.displayMessange() << std::endl;
}