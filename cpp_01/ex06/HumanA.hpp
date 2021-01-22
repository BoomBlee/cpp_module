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
