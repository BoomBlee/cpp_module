#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(/* args */)
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type){
	m_type = type;
}

Zombie * ZombieEvent::newZombie(std::string name){
	Zombie *zomb = new Zombie(name, m_type);
	return zomb;
}

Zombie *ZombieEvent::randomChump(){
	m_type = Zombie::randomType();
	name = Zombie::randomName();
	Zombie *zomb = new Zombie(name, m_type);
	return zomb;
}
