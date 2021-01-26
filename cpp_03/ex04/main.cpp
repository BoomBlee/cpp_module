#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main() {
	srand(time(NULL));

	SuperTrap sup("tut");

	sup.meleeAttack("BOSS");
	sup.rangedAttack("No BOSS");

	return 0;
}