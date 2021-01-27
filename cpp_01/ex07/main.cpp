#include "replace.hpp"

#define RED "\33[1;31m"
#define GREEN "\33[1;32m"
#define YELLOW "\33[1;33m"
#define BLUE "\33[1;34m"
#define CIAN "\33[1;36m"
#define RESET "\33[0m"

int main() {
	replace str;

	if (str.readStr("test.txt") == false) {
		std::cout << RED << "Not open file" << RESET << std::endl;
		return 1;
	}
	str.replaceStr("Hello", "HELL");
	if (str.writeStr("test.txt") == false) {
		std::cout << RED << "Not open file" << RESET << std::endl;
		return 1;
	}
	return 0;
}