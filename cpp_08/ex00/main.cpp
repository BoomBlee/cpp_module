#include "easyfind.hpp"

#include <list>
#include <vector>
#include <deque>
#include <array>

int main() {
	
	std::cout << YELLOW << "----------LIST----------" << RESET << std::endl;

	std::list<int> list;
    for (int count=-5; count < 10; ++count)
        list.push_back(count);

	try {
		std::cout << GREEN << *easyfind(list, 7) << std::endl;
		std::cout << *easyfind(list, 0) << std::endl;
		std::cout << *easyfind(list, -4) << std::endl;
		std::cout << *easyfind(list, -1) << std::endl;
		std::cout << *easyfind(list, 10) << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << "----------VECTOR----------" << RESET << std::endl;
	std::vector<int> vect;

    for (int count=-5; count < 10; ++count)
        vect.push_back(count);

	try {
		std::cout << GREEN << *easyfind(vect, 8) << std::endl;
		std::cout << *easyfind(vect, 3) << std::endl;
		std::cout << *easyfind(vect, -4) << std::endl;
		std::cout << *easyfind(vect, 4) << std::endl;
		std::cout << *easyfind(vect, -14) << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << "----------DEQUE----------" << RESET << std::endl;
	std::deque<int> deq;

    for (int count=0; count < 10; ++count)
    {
        deq.push_back(count); // вставляем числа в конец массива
        deq.push_front(10 - count); // вставляем числа в начало массива
    }

	try {
		std::cout << GREEN << *easyfind(deq, 8) << std::endl;
		std::cout << *easyfind(deq, 3) << std::endl;
		std::cout << *easyfind(deq, 0) << std::endl;
		std::cout << *easyfind(deq, 4) << std::endl;
		std::cout << *easyfind(deq, -1) << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}


	std::cout << YELLOW << "----------ARRAY----------" << RESET << std::endl;
	std::array<int, 10> arr;
	for (int i=0; i < 10; ++i)
        arr.at(i) = i;

	try {
		std::cout << GREEN << *easyfind(arr, 8) << std::endl;
		std::cout << *easyfind(arr, 3) << std::endl;
		std::cout << *easyfind(arr, 0) << std::endl;
		std::cout << *easyfind(arr, 4) << std::endl;
		std::cout << *easyfind(arr, -1) << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	return 0;
}