#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int number;
	static const int count;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int num);
	Fixed(const float num);
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed();
	int getRawBits();
	void setRawBits(int const raw);
	Fixed &operator=(const Fixed &obj);
};

std::ostream	&operator<<(std::ostream &fd, const Fixed &obj);
