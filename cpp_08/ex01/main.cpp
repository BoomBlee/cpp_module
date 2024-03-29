#include "span.hpp"

int main()
{
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "----------------------------------" << std::endl;

	try {
		Span sp = Span(5);

		std::vector<int> vector;

		for (int i=0; i < 10; ++i) {
			srand(time(NULL));
			vector.push_back(rand() % 5 + i * 3);
		}
		for (int i=0; i < 10; ++i) {
			std::cout << vector[i] << std::endl;
		}
		std::cout << "-addNumber-" << std::endl;
		sp.addNumber(vector.begin(), vector.end());
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: "<< sp.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
