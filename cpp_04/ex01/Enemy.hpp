#pragma once

#include <iostream>

class Enemy
{
private:
	int hp;
	std::string type;
public:
	Enemy();
	Enemy(const Enemy &);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	Enemy &operator=(const Enemy&);
};
