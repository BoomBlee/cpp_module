#include "Fixed.hpp"

const int Fixed::count = 8;

Fixed &Fixed::operator=(const Fixed &obj) {
	number = obj.number;
	return *this;
}


Fixed::Fixed()
{
	std::cout << "New constructor" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor" << std::endl;
	*this = obj;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() {
	return this->number;
}

void Fixed::setRawBits(int const raw) {
	this->number = raw;
	std::cout << "New number:" << number << std::endl;
}
