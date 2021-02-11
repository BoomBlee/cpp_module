#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
	try {
		Bureaucrat bur = Bureaucrat("BUR", 140);
		ShrubberyCreationForm f = ShrubberyCreationForm("home");

		// f.execute(bur);
		bur.signForm(f);
		std::cout << "fdsfsd" << std::endl;
		f.execute(bur);
		std::cout << "fdsfsd" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what();
	}
	return 0;
}