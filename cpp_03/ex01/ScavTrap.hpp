#include <iostream>

class ScavTrap
{
private:
	unsigned int hitPoints; //(100)
	unsigned int maxHitPoints; //(100)
	unsigned int energyPoints; //(100)
	unsigned int maxEnergyPoints; //(100)
	unsigned int level; //(1)
	std::string name;
	unsigned int meleeAttackDamage; //(30)
	unsigned int rangedAttackDamage; //(20)
	unsigned int armorDamageReduction; //(5)
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};

ScavTrap::ScavTrap(std::string name) : name(name)
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 50;
	maxEnergyPoints = 50;
	level = 1;
	meleeAttackDamage = 20;
	rangedAttackDamage = 15;
	armorDamageReduction = 3;
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destroy" << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
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
	
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << "придумать несколько задач" << std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}
