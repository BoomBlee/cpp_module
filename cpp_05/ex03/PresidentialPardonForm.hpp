#pragma once

#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
private:
	const std::string target;
public:
	PresidentialPardonForm(const std::string);
	~PresidentialPardonForm();
	virtual void execute(Bureaucrat const & executor) const ;
};
