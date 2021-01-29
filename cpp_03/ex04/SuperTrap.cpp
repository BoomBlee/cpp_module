#include "SuperTrap.hpp"

SuperTrap::SuperTrap()  : ClapTrap(100,100,100,100,1,30,20,5,"Железяка") {
	std::cout << GREEN << "SuperTrap created" << RESET << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &obj) {
	std::cout << "Copy constructor" << std::endl;
	*this = obj;
}

SuperTrap::~SuperTrap() {
	std::cout << RED << "SuperTrap destroy" << RESET << std::endl;
}

void SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::takeDamage(unsigned int amount) {
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

void SuperTrap::beRepaired(unsigned int amount) {
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

void SuperTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string str[] = {"1", "2", "3", "4", "5"};
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << str[rand() % 5] << std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}
