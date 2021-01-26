#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
	srand(time(NULL));
	FragTrap frag;
	NinjaTrap nin;
	std::cout << std::endl;
	nin.ninjaShoebox(frag);
	std::cout << std::endl;

	return 0;
}