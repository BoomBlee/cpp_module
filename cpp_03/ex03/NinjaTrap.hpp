#pragma once

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#define RED "\33[1;31m"
#define GREEN "\33[1;32m"
#define YELLOW "\33[1;33m"
#define BLUE "\33[1;34m"
#define RESET "\33[0m"


class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &obj);
	NinjaTrap();
	~NinjaTrap();
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void ninjaShoebox(const FragTrap &);
	void ninjaShoebox(const ScavTrap &);
	void ninjaShoebox(const ClapTrap &);
	void ninjaShoebox(const NinjaTrap &);
	NinjaTrap &operator=(const NinjaTrap &obj);
};
