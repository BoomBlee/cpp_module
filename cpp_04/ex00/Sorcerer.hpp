#pragma once

#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
private:
	std::string name;
	std::string type;
public:
	Sorcerer(std::string, std::string);
	Sorcerer(const Sorcerer&);
	Sorcerer();
	~Sorcerer();
	std::string says() const;
	Sorcerer &operator=(const Sorcerer &obj);
	std::ostream &operator<<(std::ostream &fd);
	void polymorph(Victim const &) const;
};

std::ostream	&operator<<(std::ostream &fd, const Sorcerer &obj);