#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) {
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = level;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->name = name;
	std::cout << name << " created" << std::endl;
	std::cout << GREEN << "NinjaTrap created" << RESET << std::endl;
}

NinjaTrap::NinjaTrap(unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints, unsigned int maxEnergyPoints, unsigned int level, unsigned int meleeAttackDamage, unsigned int rangedAttackDamage, unsigned int armorDamageReduction, std::string name)
 : ClapTrap(hitPoints,maxHitPoints,energyPoints,maxEnergyPoints,level,meleeAttackDamage,rangedAttackDamage,armorDamageReduction,name) {
	std::cout << name << " created" << std::endl;
}

NinjaTrap::NinjaTrap() {
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = level;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->name = "NinjaTrap";
	std::cout << GREEN << "NinjaTrap created" << RESET << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj) {
	std::cout << "Copy constructor" << std::endl;
	*this = obj;
}

NinjaTrap::~NinjaTrap() {
	std::cout << RED << "NinjaTrap destroy" << RESET << std::endl;
}

void NinjaTrap::rangedAttack(std::string const & target) {
	std::cout << "NinjaTrap " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) {
	std::cout << "NinjaTrap " << name << " attacks " << target << " at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void NinjaTrap::takeDamage(unsigned int amount) {
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

void NinjaTrap::beRepaired(unsigned int amount) {
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

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &obj) {
	ClapTrap::operator=(obj);
	return *this;
}

void NinjaTrap::ninjaShoebox(const FragTrap & trap) {
	std::string str[] = {"Пугает ", "Убегает от ", "Играет в догонялки с "};
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << str[rand() % 3] << trap.getName() <<std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}

void NinjaTrap::ninjaShoebox(const ScavTrap & trap) {
	std::string str[] = {"Пугает ", "Убегает от ", "Играет в догонялки с "};
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << str[rand() % 3] << trap.getName() <<std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}

void NinjaTrap::ninjaShoebox(const ClapTrap & trap) {
	std::string str[] = {"Пугает ", "Убегает от ", "Играет в догонялки с "};
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << str[rand() % 3] << trap.getName() <<std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}

void NinjaTrap::ninjaShoebox(const NinjaTrap & trap) {
	std::string str[] = {"Пугает ", "Убегает от ", "Играет в догонялки с "};
	if (energyPoints - 25 >= 0) {
		energyPoints -= 25;
		std::cout << str[rand() % 3] << trap.getName() <<std::endl;
	}
	else {
		std::cout << "low energy points" <<std::endl;
	}
}