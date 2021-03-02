
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

const char* RobotomyRequestForm::robotomizedFail::what() const throw() {
	return ">>>Failure<<<";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	checkBureaucrat(executor);

	if (rand() % 2)
		std::cout << target << " has been robotomized";
	else
		throw robotomizedFail();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
	Form::operator=(obj);
	return *this;
}
