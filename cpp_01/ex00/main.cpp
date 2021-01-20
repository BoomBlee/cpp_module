#include "Pony.hpp"

void ponyOnHeap(){
	Pony *poony = new Pony(4, 1, 1, "Brown");
	poony->setColor("Black");
	delete poony;
}

void ponyOnStack(){
	Pony mutant(6, 2, 3, "Blue");
}

int main(){
	ponyOnHeap();
	ponyOnStack();
	return 0;
}