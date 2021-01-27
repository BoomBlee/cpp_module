#pragma once
#include<iostream>

#define RED "\33[1;31m"
#define GREEN "\33[1;32m"
#define YELLOW "\33[1;33m"
#define BLUE "\33[1;34m"
#define CIAN "\33[1;36m"
#define RESET "\33[0m"

class Zombie{
private:
	std::string name;
	std::string type;
public:
	Zombie(std::string, std::string);
	~Zombie();
	static std::string randomName();
	static std::string randomType();
	void announce();
};