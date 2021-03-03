#include <iostream>

#include "function.hpp"

#ifndef COLOR
# define COLOR

# define RED "\33[1;31m"
# define GREEN "\33[1;32m"
# define YELLOW "\33[1;33m"
# define BLUE "\33[1;34m"
# define CIAN "\33[1;36m"
# define RESET "\33[0m"
#endif

int main() {
	srand(time(NULL));
	

	void *raw = serialize();

	Data *data = deserialize(raw);

	std::cout << "---------------------------" << std::endl;
	std::cout << GREEN << "s1:" << RESET << data->s1 << std::endl;
	std::cout << BLUE << "n:" << RESET << data->n << std::endl;
	std::cout << YELLOW << "s2:" << RESET << data->s2 << std::endl;
	std::cout << "---------------------------" << std::endl;
    return 0;
}