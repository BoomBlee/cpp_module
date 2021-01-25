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

Fixed::Fixed(const int num) {
	this->number = num << this->count;
}

Fixed::Fixed(const float num) {
	this->number = roundf(num * exp2(this->count));
}

float Fixed::toFloat(void) const {
	return (float)(this->number) / exp2(this->count);
}

int Fixed::toInt( void ) const {
	return this->number >> this->count;
}

std::ostream	&operator<<(std::ostream &fd, const Fixed &obj) {
	return fd << obj.toFloat();
}