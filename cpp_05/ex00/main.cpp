#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat sad = Bureaucrat("name", 11);
		// while (1)
		std::cout << sad;
		sad.incrementGrade(1);
		std::cout << sad;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
