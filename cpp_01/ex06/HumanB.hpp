#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	void attack();
	HumanB(std::string);
	~HumanB();
	void setWeapon(Weapon &);
};

HumanB::HumanB(std::string name1) : name(name1)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack(){
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}