
HumanA::HumanA(std::string name1, Weapon &weapon1) : name(name1), weapon(weapon1)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(){
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}