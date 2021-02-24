#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
	srand(time(NULL));
	std::cout << YELLOW << "------------------------ShrubberyCreationForm-------------------------" << RESET << std::endl;
	try {
		Bureaucrat bur = Bureaucrat("BUR", 150);
		ShrubberyCreationForm f = ShrubberyCreationForm("home");

		// f.execute(bur);
		bur.signForm(f);
		std::cout << "test 1" << std::endl;
		f.execute(bur);
		std::cout << "test 2" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}


	std::cout << YELLOW << "-------------------------RobotomyRequestForm-------------------------" << RESET << std::endl;


	std::cout << YELLOW << "-----------------------PresidentialPardonForm-------------------------" << RESET << std::endl;
	return 0;
}