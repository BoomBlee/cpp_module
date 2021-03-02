#pragma once

#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
private:
	const std::string target;
public:
	RobotomyRequestForm(const std::string);
	~RobotomyRequestForm();
	virtual void execute(Bureaucrat const & executor) const ;
	class robotomizedFail : public std::exception {virtual const char* what() const throw();};
	RobotomyRequestForm &operator=(const RobotomyRequestForm &);
};
