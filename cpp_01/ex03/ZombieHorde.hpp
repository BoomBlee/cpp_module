#include"Zombie.hpp"

class ZombieHorde
{
private:
	size_t number;
	Zombie	*zomb;
public:
	ZombieHorde(size_t number);
	~ZombieHorde();
	void announce();
};
