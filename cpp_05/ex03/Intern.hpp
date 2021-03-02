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
	Form *(Intern::*forms[3])(std::string);
public:
	Intern(/* args */);
	~Intern();
	Form *createShrubberyCreation(const std::string);
	Form *createRobotomyRequest(const std::string);
	Form *createPresidentialPardon(const std::string);
	Form *makeForm(const std::string, const std::string);
	class noFoundForm : public std::exception {virtual const char* what() const throw();};
	Intern &operator=(Intern const &);
};