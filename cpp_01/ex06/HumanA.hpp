#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;
public:
	void attack();
	HumanA(std::string, Weapon&);
	~HumanA();
};

HumanA::HumanA(std::string name1, Weapon &weapon1) : name(name1), weapon(weapon1)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(){
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}