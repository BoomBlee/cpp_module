#pragma once

#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
private:
	const std::string target;
	static const std::string tree[3];
public:
	RobotomyRequestForm(const std::string);
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor);
};

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 145, 137), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}


void RobotomyRequestForm::execute(Bureaucrat const & executor) {
	if (getSign() == true) {
		
	}
	else
		throw unsignedForm();
}