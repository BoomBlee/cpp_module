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

std::ostream	&operator<<(std::ostream &fd, const Peon &obj);