#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
	srand(time(NULL));
	FragTrap frag("Frag");
	ScavTrap scav("Scav");

	frag.meleeAttack("scav");
	scav.meleeAttack("frag");

	frag.vaulthunter_dot_exe("asd");

	return 0;
}