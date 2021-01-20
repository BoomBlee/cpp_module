#include"Zombie.hpp"

class ZombieEvent
{
private:
	std::string m_type;
	std::string name;
public:
	void setZombieType(std::string type);
	Zombie * newZombie(std::string name);
	ZombieEvent(/* args */);
	~ZombieEvent();
	Zombie * randomChump();
};