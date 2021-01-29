#pragma once

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim
{
public:
	Peon(std::string);
	Peon(const Peon&);
	Peon();
	~Peon();
	std::string says() const;
	Peon &operator=(const Peon &obj);
	std::ostream &operator<<(std::ostream &fd);
	virtual void getPolymorphed() const;
};

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

void Peon::getPolymorphed() const{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}