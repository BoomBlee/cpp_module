#pragma once
#include "Form.hpp"

#include <iostream>
#include <exception>

#ifndef COLOR
# define COLOR

# define RED "\33[1;31m"
# define GREEN "\33[1;32m"
# define YELLOW "\33[1;33m"
# define BLUE "\33[1;34m"
# define CIAN "\33[1;36m"
# define RESET "\33[0m"
#endif

// class Form;

class Bureaucrat
{
private:
	const std::string name;
	size_t grade;
public:
	Bureaucrat(const std::string name, size_t grade);
	~Bureaucrat();
	void incrementGrade(size_t);
	void decrementGrade(size_t);
	class GradeTooHighException : public std::exception {virtual const char* what() const throw();};
	class GradeTooLowException : public std::exception {virtual const char* what() const throw();};
	Bureaucrat &operator=(Bureaucrat const &);
	std::string getName() const;
	size_t getGrade() const;
	std::string say() const;
	std::ostream &operator<<(std::ostream &fd);
	void signForm(Form &) const;
};

std::ostream	&operator<<(std::ostream &fd, const Bureaucrat &obj);
