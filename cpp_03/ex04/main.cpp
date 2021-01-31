#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main() {
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	{
		std::cout << "New ClapTrap: " << std::endl << std::endl;
		ClapTrap	clap("Sid");

		std::cout << std::endl << "Attacks: " << std::endl << std::endl;
		clap.meleeAttack("Manny");
		clap.rangedAttack("Diego");

		std::cout << std::endl << "Take Damage: " << std::endl << std::endl;
		clap.takeDamage(10);
		clap.takeDamage(60);
		clap.takeDamage(1000);
		clap.takeDamage(10);

		std::cout << std::endl << "Repairs: " << std::endl << std::endl;
		clap.beRepaired(101);
		clap.beRepaired(5);

		std::cout << std::endl << "Destroing: " << std::endl << std::endl;
	}
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
	{
		std::cout << "New NinjaTrap: " << std::endl << std::endl;
		NinjaTrap	ninja("Naruto");
		FragTrap	frag("Frag");
		ScavTrap	scav("Scav");
		ClapTrap	clap("Clap");
		NinjaTrap	ninja1("Ninja");

		std::cout << std::endl << "Attacks: " << std::endl << std::endl;
		ninja.meleeAttack("Madara");
		ninja.rangedAttack("Sasuke");

		std::cout << std::endl << "Take Damage: " << std::endl << std::endl;
		ninja.takeDamage(10);
		ninja.takeDamage(60);
		ninja.takeDamage(1000);
		ninja.takeDamage(10);

		std::cout << std::endl << "Repairs: " << std::endl << std::endl;
		ninja.beRepaired(101);
		ninja.beRepaired(5);

		std::cout << std::endl << "Shoebox: " << std::endl << std::endl;
		ninja.ninjaShoebox(frag);
		ninja.ninjaShoebox(scav);
		ninja.ninjaShoebox(clap);
		ninja.ninjaShoebox(ninja1);

		std::cout << std::endl << "Destroing: " << std::endl << std::endl;
	}
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	{
		std::cout << "New SuperTrap: " << std::endl << std::endl;
		SuperTrap	super("Klark");
		FragTrap	frag("Frag");
		ScavTrap	scav("Scav");
		ClapTrap	clap("Clap");
		NinjaTrap	ninja("Ninja");

		std::cout << std::endl << "Attacks: " << std::endl << std::endl;
		super.meleeAttack("Kururu");
		super.rangedAttack("Kururu");

		std::cout << std::endl << "Take Damage: " << std::endl << std::endl;
		super.takeDamage(10);
		super.takeDamage(60);
		super.takeDamage(1000);
		super.takeDamage(10);

		std::cout << std::endl << "Repairs: " << std::endl << std::endl;
		super.beRepaired(101);
		super.beRepaired(5);

		std::cout << std::endl << "Vaulthunter: " << std::endl << std::endl;
		super.vaulthunter_dot_exe("target 1");
		super.vaulthunter_dot_exe("target 2");
		super.vaulthunter_dot_exe("target 3");
		super.vaulthunter_dot_exe("target 4");
		super.vaulthunter_dot_exe("target 5");
		super.vaulthunter_dot_exe("target 6");
		
		std::cout << std::endl << "Shoebox: " << std::endl << std::endl;
		super.ninjaShoebox(frag);
		super.ninjaShoebox(scav);
		super.ninjaShoebox(clap);
		super.ninjaShoebox(ninja);

		std::cout << std::endl << "Destroing: " << std::endl << std::endl;
	}
	std::cout << "-----------------------------------------------------------------------------------------------------------------------|----" << std::endl;
	return (0);
}