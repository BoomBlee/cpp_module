#include "replace.hpp"

int main() {
	replace str;

	str.readStr("test.txt");
	str.replaceStr("Hello", "HELL");
	str.writeStr("test.txt");
	return 0;
}