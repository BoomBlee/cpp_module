#include "Convert.hpp"
#include <iostream>

#ifndef COLOR
#define COLOR

# define RED "\33[1;31m"
# define GREEN "\33[1;32m"
# define YELLOW "\33[1;33m"
# define BLUE "\33[1;34m"
# define CIAN "\33[1;36m"
# define RESET "\33[0m"
#endif

int main(int ac, char** av) {
	if (ac == 1) {
		std::cout << "❌" << RED << "ERROR: " << YELLOW << "no argument" << RESET << std::endl;
		return 1;
	}
	else if (ac > 2) {
		std::cout << "❌" << RED << "ERROR: " << YELLOW << "to many arguments" << RESET << std::endl;
		return 1;
	}
	try {
		Convert a(av[1]);
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return 0;
}