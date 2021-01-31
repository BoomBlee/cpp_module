#include "FragTrap.hpp"

FragTrap &FragTrap::operator=(const FragTrap &obj) {
	name = obj.name;
	hitPoints = obj.hitPoints;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	return *this;
}

FragTrap::FragTrap(std::string name) : name(name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	std::cout << "FR4G-TP created" << std::endl;
}

FragTrap::FragTrap() {
	name = "Железяка";
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	std::cout << "FR4G-TP created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
	std::cout << "Copy constructor" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP destroy" << std::endl;
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
		std::cout << RED << "Damage " << RESET << amount << " HP lost " << hitPoints << std::endl;
	}
	else if (hitPoints == 0)
		std::cout << RED << "Stop shooting i'm dead" << RESET << std::endl;
	else {
		hitPoints = 0;
		std::cout << RED << "I'm DEAD!!!" << RESET << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (amount + hitPoints < maxHitPoints) {
		hitPoints += amount;
		if (hitPoints != amount)
			std::cout << GREEN << "Healsies! " << RESET << amount << " Hit Points" << std::endl;
		else
			std::cout << GREEN << "Sweet life juice!" << RESET << std::endl;
	}
	else if (hitPoints == maxHitPoints){
		std::cout << GREEN << "Stop repaired full HP" << RESET << std::endl;
	}
	else if (amount + hitPoints >= maxHitPoints) {
		hitPoints = maxHitPoints;
		std::cout << GREEN << "Max Hit Point" << RESET << std::endl;
	}
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attacks[]={"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!", "I bet your mom could do better!", "What is that smell? Oh, never mind... it's just you!", "Glitchy weirdness is term of endearment, right?", "This time it'll be awesome, I promise!"};

	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << YELLOW << attacks[rand() % 5] << RESET << target << std::endl;
	}
	else {
		std::cout << "Crap, no more shots left!" << RESET <<std::endl;
	}
}
