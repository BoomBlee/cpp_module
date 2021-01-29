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
