#include "Victim.hpp"

Victim::Victim() {
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &obj) {
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	*this = obj;
}

Victim::Victim(std::string name) : name(name) {
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator=(const Victim &obj) {
	name = obj.name;
	return *this;
}

std::string Victim::says() const {
	std::string str = "I am " + name + " and I like otters!";
	return str;
}

std::ostream	&operator<<(std::ostream &fd, const Victim &obj) {
	return fd << obj.says() << std::endl;
}

void Victim::getPolymorphed() const {
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

std::string Victim::getName() const {
	return name;
}
