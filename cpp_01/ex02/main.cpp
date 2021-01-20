#include "ZombieEvent.hpp"

int main(){
	srand(time(NULL));
	ZombieEvent zombEvent;
	zombEvent.setZombieType("Big Boss");

	Zombie * zomb = zombEvent.newZombie("Kcaraway");
	zomb->announce();
	for (int i = 0; i < 10; i++)
	{
		Zombie * zomb1 = zombEvent.randomChump();
		zomb1->announce();
		delete zomb1;
	}
	
	delete zomb;
	return 0;
}
