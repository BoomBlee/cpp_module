#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, size_t grade, size_t execute) : nameForm(name), sign(false), gradeForm(grade), executeForm(execute) {
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw() {
	return "GradeTooHighException";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "GradeTooLowException";
}

const char* Form::unsignedForm::what() const throw() {
	return "unsigned form";
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

size_t Form::getExecute() const {
	return executeForm;
}

void Form::beSigned(const Bureaucrat &obj) {
	if (sign == false) {
		if (obj.getGrade() <= gradeForm) {
			sign = true;
			std::cout << GREEN << obj.getName() << " signs " << getName() << RESET << std::endl;
		}
		else
			throw GradeTooLowException();
	}
	else
		std::cout << YELLOW << "form уже подписана" << RESET << std::endl;
}

void Form::checkBureaucrat(const Bureaucrat &obj) const {
	if (obj.getGrade() > executeForm)
		throw GradeTooLowException();
	if (sign == false)
		throw unsignedForm();
}