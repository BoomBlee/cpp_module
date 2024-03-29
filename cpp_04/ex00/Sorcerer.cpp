#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
	std::cout << name << ", " << type << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &obj) {
	std::cout << name << ", " << type << ", is born!" << std::endl;
	*this = obj;
}

Sorcerer::Sorcerer(std::string name, std::string type) : name(name), type(type) {
	std::cout << name << ", " << type << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << name << ", " << type << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &obj) {
	name = obj.name;
	type = obj.type;
	return *this;
}

std::string Sorcerer::says() const {
	std::string str = "I am " + name + ", " + type + ", and I like ponies!";
	return str;
}

std::ostream &operator<<(std::ostream &fd, const Sorcerer &obj) {
	return fd << obj.says() << std::endl;
}

void Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}