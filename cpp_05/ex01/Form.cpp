#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, size_t grade) : nameForm(name), sign(false), gradeForm(grade) {
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw() {
	return "too high form";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "too low form";
}

std::string Form::getName() const {
	return nameForm;
}

bool Form::getSign() const {
	return sign;
}

size_t Form::getGrade() const {
	return gradeForm;
}

void Form::beSigned(const Bureaucrat &obj) {
	if (sign == false) {
		if (obj.getGrade() <= gradeForm) {
			sign = true;
			std::cout << GREEN << obj.getName() << " signs " << getName() << RESET << std::endl;
		}
		else
			throw Form::GradeTooLowException();
	}
	else
		std::cout << YELLOW << "form уже подписана" << RESET << std::endl;
}
