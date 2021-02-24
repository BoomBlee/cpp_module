#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	const std::string target;
	static const std::string tree[3];
public:
	ShrubberyCreationForm(const std::string);
	~ShrubberyCreationForm();
	virtual void execute(Bureaucrat const & executor) const;
	class openFileException : public std::exception {virtual const char* what() const throw();};
};
