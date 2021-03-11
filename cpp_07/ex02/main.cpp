#include "Array.hpp"

int main() {

	try {
		std::cout << GREEN << "---------INT---------" << RESET << std::endl;

		Array<int> arrInt(10);


		for (unsigned int i=0; i < arrInt.size(); ++i)
			arrInt[i] = i;

		for (unsigned int i=0; i < arrInt.size(); ++i)
			std::cout << arrInt[i] << " ";
		std::cout << std::endl;

		Array<int> arrIntTwo(arrInt);

		for (unsigned int i=0; i < arrInt.size(); ++i)
			std::cout << arrInt[i] << " ";
		std::cout << std::endl;

		for (unsigned int i=0; i <= arrInt.size(); ++i)
			std::cout << arrInt[i] << " ";
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	try {
		Array<int> arrInt(10);

		for (unsigned int i=0; i < arrInt.size(); ++i)
			arrInt[i] = i;
		std::cout << YELLOW << "index=\"-10\": " << RESET << arrInt[-10] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "---------STRING---------" << RESET << std::endl;
	try {
		std::string str[] = {"Не ругайте ленивых они же ничего не сделали","Если волк молчит, то лучше его не перебивать"};

		Array<std::string> arrStr(2);
		for (unsigned int i=0; i < arrStr.size(); ++i)
			arrStr[i] = str[i];
		for (unsigned int i=0; i < arrStr.size(); ++i)
			std::cout << arrStr[i] << std::endl;


		std::cout << std::endl;

		std::string strTwo[] = {"Лучше иметь друга, чем друг друга"};

		Array<std::string> arrStrTwo(1);
		for (unsigned int i=0; i < arrStrTwo.size(); ++i)
			arrStrTwo[i] = strTwo[i];
		for (unsigned int i=0; i < arrStrTwo.size(); ++i)
			std::cout << arrStrTwo[i] << std::endl;
		
	
		std::cout << std::endl;

		// arrStr = arrStrTwo;
		for (unsigned int i=0; i <= arrStr.size(); ++i)
			std::cout << arrStr[i] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	return 0;
}