#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(size_t num)
{
	zomb = new Zombie[num];
	number = num;
}

ZombieHorde::~ZombieHorde() {
	delete [] zomb;
}

void ZombieHorde::announce(){
	for (size_t i=0; i < this->number; i++)
		zomb[i].announce();
}