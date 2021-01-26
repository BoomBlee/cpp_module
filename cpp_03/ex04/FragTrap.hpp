#pragma once

#include <iostream>
#include "ClapTrap.hpp"

#define RED "\33[1;31m"
#define GREEN "\33[1;32m"
#define YELLOW "\33[1;33m"
#define BLUE "\33[1;34m"
#define RESET "\33[0m"


class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	FragTrap();
	FragTrap(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, std::string);
	~FragTrap();
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	FragTrap &operator=(const FragTrap &obj);
};

FragTrap &FragTrap::operator=(const FragTrap &obj) {
	ClapTrap::operator=(obj);
	return *this;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100,100,100,100,1,30,20,5,name) {
	std::cout << GREEN << "FFFFFR4G-TP created" << RESET << std::endl;
}

FragTrap::FragTrap(unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints, unsigned int maxEnergyPoints, unsigned int level, unsigned int meleeAttackDamage, unsigned int rangedAttackDamage, unsigned int armorDamageReduction, std::string name) : ClapTrap(100,100,100,100,1,30,20,5,name) {
	std::cout << name << " created" << std::endl;
}

FragTrap::FragTrap() {
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->name = "name";
	std::cout << GREEN << "FR4G-TP created" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
	std::cout << "Copy constructor" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << RED << "FR4G-TP destroy" << RESET << std::endl;
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	if (amount < hitPoints + armorDamageReduction) {
		hitPoints -= amount - armorDamageReduction;
		std::cout << "Damage " << amount << " HP lost " << hitPoints << std::endl;
	}
	else if (hitPoints == 0)
		std::cout << "Stop shooting i'm dead" << std::endl;
	else {
		hitPoints = 0;
		std::cout << "I'm DEAD!!!" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (amount + hitPoints < maxHitPoints) {
		hitPoints += amount;
		if (hitPoints != amount)
			std::cout << "Repaired " << amount << " Hit Points" << std::endl;
		else
			std::cout << "Sweet life juice!" << std::endl;
	}
	else if (hitPoints == maxHitPoints){
		std::cout << "Stop repaired full HP" << std::endl;
	}
	else if (amount + hitPoints >= maxHitPoints) {
		hitPoints = maxHitPoints;
		std::cout << "Max Hit Point" << std::endl;
	}
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string str[] = {"1", "2", "3", "4", "5"};
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << str[rand() % 5] << std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}
