#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string nameForm;
	bool sign;
	const size_t gradeForm;
	const size_t executeForm;
public:
	Form(std::string, size_t, size_t);
	~Form();
	class GradeTooHighException : public std::exception {virtual const char* what() const throw();};
	class GradeTooLowException : public std::exception {virtual const char* what() const throw();};
	class unsignedForm : public std::exception {virtual const char* what() const throw();};
	std::string getName() const;
	bool getSign() const;
	size_t getGrade() const;
	void beSigned(const Bureaucrat &);
	void checkBureaucrat(const Bureaucrat &) const;
	size_t getExecute() const;
	virtual void execute(Bureaucrat const & executor) const = 0;
};
