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

class noFound : public std::exception {virtual const char* what() const throw();};

const char* noFound::what() const throw() {
	return "noFound";
}

template <typename T>

typename T::iterator easyfind(T& arr, int find) {
	typename T::iterator it;

	it = arr.begin();
	while (it != arr.end()) {
		if (*it == find)
			return it;
		++it;
	}
	throw noFound();
}