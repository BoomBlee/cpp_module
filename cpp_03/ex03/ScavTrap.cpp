#include "ScavTrap.hpp"

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
	std::string str[] = {"Build Large Hadron Collider ", "teach the rabbit to fly ", "Shoot This Guy in the Face ", "help bald man grow hair ", "not invented yet "};
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << str[rand() % 5] << target << std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}
