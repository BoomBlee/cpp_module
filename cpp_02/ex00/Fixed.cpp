#include "Fixed.hpp"

const int Fixed::count = 8;

Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << "Assignation operator called" << std::endl;
	number = obj.getRawBits();
	return *this;
}


Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->number;
}

void Fixed::setRawBits(int const raw) {
	this->number = raw;
	std::cout << "New number:" << number << std::endl;
}
