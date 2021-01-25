#pragma once

#include <iostream>
#include <ostream>

class Fixed
{
private:
	int number;
	static const int count;
public:
	Fixed();
	Fixed(const Fixed &obj);
	~Fixed();
	int getRawBits();
	void setRawBits(int const raw);
	Fixed &operator=(const Fixed &obj);
};
