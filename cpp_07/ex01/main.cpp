#include "iter.hpp"

int main() {
	char arrChar[] = {'a', 'b', 'c', 'd', 'e', 'f', 'h'};
	int arrInt[] = { 0, 1, 2, 3, 4 };

	func(arrChar, 7, &f);
	std::cout << "-------------------------" << std::endl;
	func(arrInt, 5, &f);

	return 0;
}
