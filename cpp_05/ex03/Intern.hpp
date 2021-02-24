#pragma once 

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#ifndef COLOR
# define COLOR

# define RED "\33[1;31m"
# define GREEN "\33[1;32m"
# define YELLOW "\33[1;33m"
# define BLUE "\33[1;34m"
# define CIAN "\33[1;36m"
# define RESET "\33[0m"
#endif

class Intern
{
private:
	static const std::string nameForms[3];
	static Form *(*forms[3])(std::string target);
public:
	Intern(/* args */);
	~Intern();
	Form *createShrubberyCreation(std::string);
	Form *createRobotomyRequest(std::string);
	Form *createPresidentialPardon(std::string);
	Form *makeForm(std::string, std::string);
	class noFoundForm : public std::exception {virtual const char* what() const throw();};
};

const std::string Intern::nameForms[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
Form *(Intern::*forms[3])(std::string target) = {&Intern::createShrubberyCreation, &Intern::createRobotomyRequest, &Intern::createPresidentialPardon};

Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}

Form* Intern::makeForm(std::string name, std::string target) {
	for(int i=0; i < 3; i++)
		if (this->nameForms[i] == name) {
			Form *form = (this->forms[i])(target);
			std::cout << "Intern creates " << name << "Form" << std::endl;
			return form;
		}
	throw noFoundForm();
}

Form* Intern::createShrubberyCreation(std::string target) {
	Form *form = new ShrubberyCreationForm(target);
	return form;
}

Form* Intern::createRobotomyRequest(std::string target) {
	Form *form = new RobotomyRequestForm(target);
	return form;
}

Form* Intern::createPresidentialPardon(std::string target) {
	Form *form = new PresidentialPardonForm(target);
	return form;
}

const char* Intern::noFoundForm::what() const throw() {
	return "No found form";
}
