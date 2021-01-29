#include "FragTrap.hpp"

int main() {
	FragTrap rob("Железяка");

	srand(time(NULL));
	rob.meleeAttack("c3-p0");
	rob.rangedAttack("c3-p0");
	for (int i = 0; i < 8; i++)
	{
		rob.takeDamage(22);
	}

	rob.beRepaired(40);
	rob.beRepaired(40);

	for (int i = 0; i < 6; i++)
	{
		rob.takeDamage(22);
	}
	rob.beRepaired(100);
	rob.vaulthunter_dot_exe("");
	rob.vaulthunter_dot_exe("");
	rob.vaulthunter_dot_exe("");
	return 0;
}