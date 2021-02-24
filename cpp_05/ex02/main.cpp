#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main() {
	srand(time(NULL));
	std::cout << YELLOW << "------------------------ShrubberyCreationForm-------------------------" << RESET << std::endl;
	try {
		Bureaucrat bur = Bureaucrat("BUR", 150); // Required grades: sign 145, exec 137
		ShrubberyCreationForm f = ShrubberyCreationForm("home");

		// f.execute(bur);
		bur.signForm(f);
		std::cout << "ShrubberyCreationForm test 1" << std::endl;
		f.execute(bur);
		std::cout << "ShrubberyCreationForm test 2" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}


	std::cout << YELLOW << "-------------------------RobotomyRequestForm-------------------------" << RESET << std::endl;
	try {
		Bureaucrat bur = Bureaucrat("Bureaucrat", 15); // Required grades: sign 72, exec 45
		RobotomyRequestForm form = RobotomyRequestForm("C3-PO");

		// form.execute(bur);
		bur.signForm(form);
		std::cout << "RobotomyRequestForm test 1" << std::endl;
		form.execute(bur);
		std::cout << "RobotomyRequestForm test 2" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}


	std::cout << YELLOW << "-----------------------PresidentialPardonForm-------------------------" << RESET << std::endl;
	try {
		Bureaucrat bur = Bureaucrat("Bureaucrat", 15); // Required grades: sign 25, exec 5
		PresidentialPardonForm form = PresidentialPardonForm("Kcaraway");

		// form.execute(bur);
		bur.signForm(form);
		std::cout << "PresidentialPardonForm test 1" << std::endl;
		form.execute(bur);
		std::cout << "PresidentialPardonForm test 2" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return 0;
}