#include<iostream>

class Zombie{
private:
	std::string name;
	std::string type;
public:
	Zombie(std::string, std::string);
	Zombie();
	~Zombie();
	static std::string randomName();
	static std::string randomType();
	void announce();
};