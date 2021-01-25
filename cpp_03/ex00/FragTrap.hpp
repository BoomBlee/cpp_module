#include <iostream>

class FragTrap
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
	FragTrap(std::string name);
	~FragTrap();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

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
	else if (amount + hitPoints >= maxHitPoints) {
		hitPoints = maxHitPoints;
		std::cout << "Max Hit Point" << std::endl;
	}
	else if (hitPoints == maxHitPoints){
		std::cout << "Stop repaired full HP" << std::endl;
	}
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}
