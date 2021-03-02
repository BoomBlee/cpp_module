
#include "Form.hpp"
#include "Intern.hpp"

const std::string Intern::nameForms[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};

Intern::Intern(/* args */) {
	this->forms[0] = &Intern::createShrubberyCreation;
	this->forms[1] = &Intern::createRobotomyRequest;
	this->forms[2] = &Intern::createPresidentialPardon;
}

Intern::~Intern()
{
}

Form* Intern::makeForm(const std::string name, const std::string target) {
	for(int i=0; i < 3; i++)
		if (this->nameForms[i] == name) {
			Form *form = (this->*forms[i])(target);
			std::cout << "Intern creates " << name << "Form" << std::endl;
			return form;
			// return (this->forms[i])(name, target);
			// return forms[0](name, target);
			// return Intern::createShrubberyCreation(name, "house");
		}
	throw noFoundForm();
}

Form* Intern::createShrubberyCreation(const std::string target) {
	Form *form = new ShrubberyCreationForm(target);
	return form;
}

Form* Intern::createRobotomyRequest(const std::string target) {
	Form *form = new RobotomyRequestForm(target);
	return form;
}

Form* Intern::createPresidentialPardon(const std::string target) {
	Form *form = new PresidentialPardonForm(target);
	return form;
}

const char* Intern::noFoundForm::what() const throw() {
	return "No found form";
}

Intern &Intern::operator=(Intern const &obj) {
	(void)obj;
	return *this;
}
