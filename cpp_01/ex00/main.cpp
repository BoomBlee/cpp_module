#include "Pony.hpp"

void ponyOnHeap(){
	Pony *poony = new Pony(4, 1, 1, "Brown");
	poony->setColor("Black");
	delete poony;
}

void ponyOnStack(){
	Pony mutant(6, 2, 3, "Blue");
	mutant.deleteLeg();
	mutant.setColor("White");
	mutant.deleteLeg();
}

int main(){
	ponyOnHeap();
	ponyOnStack();
	return 0;
}