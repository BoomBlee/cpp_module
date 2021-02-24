#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"


int main() {
	srand(time(NULL));
	std::cout << YELLOW << "------------------------Intern-------------------------" << RESET << std::endl; // {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"}
	try {
		Bureaucrat bur = Bureaucrat("BUR", 150);
		Intern intern;
		Form *form = intern.makeForm("Shrubbery Creation", "house");

		// f.execute(bur);
		bur.signForm(*form);
		std::cout << "test 1" << std::endl;
		form->execute(bur);
		std::cout << "test 2" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return 0;
}