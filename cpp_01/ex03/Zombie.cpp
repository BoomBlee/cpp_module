#include<iostream>
#include"Zombie.hpp"

Zombie::Zombie(){
	name = randomName();
	type = randomType();
}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type){
}

Zombie::~Zombie(){
}

std::string Zombie::randomName(){
	std::string name[5]={"name1","name2","name3","name4","name5"};
	int i=rand()%5;
	return name[i];
}

std::string Zombie::randomType(){
	std::string type[9]={"Boomer", "Hunter", "Smoker", "Tank", "Charger", "Jockey", "Spitter", "Witch", "Common Infected"};
	int i=rand()%9;
	return type[i];
}

void Zombie::announce(){
	std::cout << "<" << name << " (" << type << ")>" << "Braiiiiiiinnnssss..." << std::endl;
}
