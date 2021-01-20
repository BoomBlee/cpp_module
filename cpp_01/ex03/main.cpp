#include "ZombieHorde.hpp"

int main(){
	srand(time(NULL));
	ZombieHorde zomb(10);

	zomb.announce();

	return 0;
}