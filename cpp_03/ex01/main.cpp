#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {
	srand(time(NULL));
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	{
		std::cout << "New FragTrap: " << std::endl << std::endl;
		FragTrap	frag("Pika");

		std::cout << std::endl << "Attacks: " << std::endl << std::endl;
		frag.meleeAttack("Table");
		frag.rangedAttack("Wall");

		std::cout << std::endl << "Take Damage: " << std::endl << std::endl;
		frag.takeDamage(10);
		frag.takeDamage(60);
		frag.takeDamage(1000);
		frag.takeDamage(10);

		std::cout << std::endl << "Repairs: " << std::endl << std::endl;
		frag.beRepaired(101);
		frag.beRepaired(5);

		std::cout << std::endl << "Vaulthunter: " << std::endl << std::endl;
		frag.vaulthunter_dot_exe("target 1");
		frag.vaulthunter_dot_exe("target 2");
		frag.vaulthunter_dot_exe("target 3");
		frag.vaulthunter_dot_exe("target 4");
		frag.vaulthunter_dot_exe("target 5");
		frag.vaulthunter_dot_exe("target 6");

		std::cout << std::endl << "Destroing: " << std::endl << std::endl;
	}
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	{
		std::cout << "New ScavTrap: " << std::endl << std::endl;
		ScavTrap	clap("Geralt of Rivia");

		std::cout << std::endl << "Attacks: " << std::endl << std::endl;
		clap.meleeAttack("Nanaka");
		clap.rangedAttack("Aincrad");

		std::cout << std::endl << "Take Damage: " << std::endl << std::endl;
		clap.takeDamage(10);
		clap.takeDamage(60);
		clap.takeDamage(1000);
		clap.takeDamage(10);

		std::cout << std::endl << "Repairs: " << std::endl << std::endl;
		clap.beRepaired(101);
		clap.beRepaired(5);

		std::cout << std::endl << "Challenge: " << std::endl << std::endl;
		clap.challengeNewcomer("target 1");
		clap.challengeNewcomer("target 2");
		clap.challengeNewcomer("target 3");
		clap.challengeNewcomer("target 4");
		clap.challengeNewcomer("target 5");

		std::cout << std::endl << "Destroing: " << std::endl << std::endl;
	}
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	return (0);
}