#include "iostream"

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *createA() {
	return new A;
}

Base *createB() {
	return new B;
}

Base *createC() {
	return new C;
}

Base * generate(void) {
	srand(time(NULL));
	Base *mass[] = {createA(),createB(),createC()};
	return mass[rand() % 3];
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p) {
	identify_from_pointer(&p);
}

int main() {
	Base *base = generate();

	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	return 0;
}
