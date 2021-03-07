#include "iter.hpp"

int main() {
	char arrChar[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
	int arrInt[] = { 0, 1, 2, 3, 4 };

	func(arrChar, 8, &f);
	std::cout << "-------------------------" << std::endl;
	func(arrChar, 5, &f);

	return 0;
}
