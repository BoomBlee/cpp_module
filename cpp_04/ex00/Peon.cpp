#include "Peon.hpp"

Peon::Peon() {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &obj) {
	std::cout << "Zog zog." << std::endl;
	*this = obj;
}

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator=(const Peon &obj) {
	Victim::operator=(obj);
	return *this;
}

std::ostream &operator<<(std::ostream &fd, const Peon &obj) {
	return fd << obj.says() << std::endl;
}

std::string Peon::says() const {
	std::string str = "I am " + getName() + " and I like otters!";
	return str;
}

void Peon::getPolymorphed() const{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}