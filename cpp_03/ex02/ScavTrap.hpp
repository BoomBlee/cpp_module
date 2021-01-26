#pragma once

#include <iostream>
#include "ClapTrap.hpp"

#define RED "\33[1;31m"
#define GREEN "\33[1;32m"
#define YELLOW "\33[1;33m"
#define BLUE "\33[1;34m"
#define CIAN "\33[1;36m"
#define RESET "\33[0m"


class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj);
	ScavTrap();
	~ScavTrap();
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(100,100,50,50,1,20,15,3,name) {
	std::cout << GREEN << name << " created" << RESET << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap(100,100,50,50,1,20,15,3,"ScavTrap") {
	std::cout << GREEN << "ScavTrap created" << RESET <<std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap destroy" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
	std::cout << "Copy constructor" << std::endl;
	*this = obj;
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SL4V-TP " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SL4V-TP " << name << " attacks " << target << " at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
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

void ScavTrap::beRepaired(unsigned int amount) {
	if (amount + hitPoints < maxHitPoints) {
		hitPoints += amount;
		if (hitPoints != amount)
			std::cout << "Repaired " << amount << "Hit Points" << std::endl;
		else
			std::cout << "Я воскрес!!!" << std::endl;
	}
	else if (amount + hitPoints >= maxHitPoints) {
		hitPoints = maxHitPoints;
		std::cout << "Max Hit Point" << std::endl;
	}
	else if (hitPoints == maxHitPoints){
		std::cout << "Stop repaired full HP" << std::endl;
	}
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	std::string str[] = {"1", "2", "3", "4", "5"};
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << str[rand() % 5] << std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}
