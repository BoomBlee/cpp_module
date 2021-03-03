#pragma once

#include <iostream>

#ifndef COLOR
# define COLOR

# define RED "\33[1;31m"
# define GREEN "\33[1;32m"
# define YELLOW "\33[1;33m"
# define BLUE "\33[1;34m"
# define CIAN "\33[1;36m"
# define RESET "\33[0m"
#endif

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void * serialize(void);

Data * deserialize(void * raw);

