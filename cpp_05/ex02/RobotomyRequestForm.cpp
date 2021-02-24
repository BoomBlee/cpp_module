
#include "RobotomyRequestForm.hpp"

#ifndef COLOR
# define COLOR

# define RED "\33[1;31m"
# define GREEN "\33[1;32m"
# define YELLOW "\33[1;33m"
# define BLUE "\33[1;34m"
# define CIAN "\33[1;36m"
# define RESET "\33[0m"
#endif

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

const char* RobotomyRequestForm::robotomizedFail::what() const throw() {
	return ">>>Failure<<<";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	checkBureaucrat(executor);

	if (rand() % 2)
		std::cout << CIAN << target << " has been robotomized" << RESET << std::endl;
	else
		throw robotomizedFail();
}