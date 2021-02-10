#pragma once

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
private:
	std::string name;
	int AP;
	AWeapon *weapon;
public:
	Character();
	Character(const Character &);
	Character(std::string const & type);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	std::string displayMessange() const;
	Character &operator=(const Character &obj);
	std::ostream &operator<<(std::ostream &fd);
};

std::ostream	&operator<<(std::ostream &fd, const Character &obj);
