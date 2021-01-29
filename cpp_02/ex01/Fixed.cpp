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
	return this->number;
}

void Fixed::setRawBits(int const raw) {
	this->number = raw;
	std::cout << "New number:" << number << std::endl;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->number = num << this->count;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
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
