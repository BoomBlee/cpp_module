#include "Bureaucrat.hpp"

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj) {
	// this->name = obj.name;
	this->grade = obj.grade;
	return *this;
}

Bureaucrat::Bureaucrat(const std::string name, size_t grade) : name(name) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::incrementGrade(size_t num) {
	if (grade + num > 150)
		throw GradeTooLowException();
	grade += num;
}

void Bureaucrat::decrementGrade(size_t num){
	if (grade - num < 1)
		throw GradeTooHighException();
	grade -= num;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "too low";
}

std::string Bureaucrat::getName() const {
	return name;
}

size_t Bureaucrat::getGrade() const {
	return grade;
}

std::string Bureaucrat::say() const {
	std::string str = getName() + ", bureaucrat grade " + std::to_string(getGrade()) + ".";
	return str;
}

std::ostream	&operator<<(std::ostream &fd, const Bureaucrat &obj) {
	return fd << obj.say() << std::endl;
}

void Bureaucrat::signForm(Form &obj) const {
	try {
		obj.beSigned(*this);
	}
	catch (std::exception &e) {
		std::cout << RED << getName() << " cannot sign " << obj.getName() << " because " << e.what() << RESET << std::endl;
	}
}