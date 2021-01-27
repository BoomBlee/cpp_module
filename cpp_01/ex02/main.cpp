#include"Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie *randomChump(){
	Zombie *zomb = new Zombie(Zombie::randomType(), Zombie::randomName());
	return zomb;
}

int main(){
	srand(time(NULL));
	ZombieEvent zombEvent;
	zombEvent.setZombieType("Big Boss");

	Zombie * zomb = zombEvent.newZombie("Kcaraway");
	zomb->announce();
	for (int i = 0; i < 10; i++)
	{
		Zombie * zomb1 = randomChump();
		zomb1->announce();
		delete zomb1;
	}
	
	delete zomb;
	return 0;
}
