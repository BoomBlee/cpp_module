
#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
	std::string type;
public:
	const std::string &getType();
	void setType(std::string);
	Weapon(std::string);
	~Weapon();
};

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(){
	return type;
}

void Weapon::setType(std::string newType){
	type = newType;
}
#endif