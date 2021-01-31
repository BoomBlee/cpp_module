#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "Copy constructor" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destroy" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "ClapTrap " << name << " attacks " << target << " at range, causing " << rangedAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "ClapTrap " << name << " attacks " << target << " at melee, causing " << meleeAttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
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

void ClapTrap::beRepaired(unsigned int amount) {
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

ClapTrap::ClapTrap(unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints, unsigned int maxEnergyPoints, unsigned int level, unsigned int meleeAttackDamage, unsigned int rangedAttackDamage, unsigned int armorDamageReduction, std::string name) {

	this->hitPoints = hitPoints;
	this->maxHitPoints = maxHitPoints;
	this->energyPoints = energyPoints;
	this->maxEnergyPoints = maxEnergyPoints;
	this->level = level;
	this->meleeAttackDamage = meleeAttackDamage;
	this->rangedAttackDamage = rangedAttackDamage;
	this->armorDamageReduction = armorDamageReduction;
	this->name = name;
	std::cout << name << " created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->maxHitPoints = obj.maxHitPoints;
	this->energyPoints = obj.energyPoints;
	this->maxEnergyPoints = obj.maxEnergyPoints;
	this->level = obj.level;
	this->meleeAttackDamage = obj.meleeAttackDamage;
	this->rangedAttackDamage = obj.rangedAttackDamage;
	this->armorDamageReduction = obj.armorDamageReduction;
	return *this;
}