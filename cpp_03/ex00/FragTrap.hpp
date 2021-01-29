#pragma once

#include <iostream>

#define RED "\33[1;31m"
#define GREEN "\33[1;32m"
#define YELLOW "\33[1;33m"
#define BLUE "\33[1;34m"
#define CIAN "\33[1;36m"
#define RESET "\33[0m"

class FragTrap
{
private:
	unsigned int hitPoints;
	unsigned int maxHitPoints;
	unsigned int energyPoints;
	unsigned int maxEnergyPoints;
	unsigned int level;
	std::string name;
	unsigned int meleeAttackDamage;
	unsigned int rangedAttackDamage;
	unsigned int armorDamageReduction;
public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj);
	FragTrap();
	~FragTrap();
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	FragTrap &operator=(const FragTrap &obj);
};