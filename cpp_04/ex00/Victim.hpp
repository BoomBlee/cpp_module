#pragma once

#include <iostream>

class Victim
{
private:
	std::string name;
public:
	Victim(std::string);
	Victim(const Victim&);
	Victim();
	~Victim();
	Victim &operator=(const Victim &obj);
	virtual void getPolymorphed() const;
	std::string says() const;
	std::string getName() const ;
	std::ostream &operator<<(std::ostream &fd);
};

std::ostream	&operator<<(std::ostream &fd, const Victim &obj);