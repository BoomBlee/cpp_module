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
	void execute(Bureaucrat const & executor);
	class openFileException : public std::exception {virtual const char* what() const throw();};
};

std::string const ShrubberyCreationForm::tree[3] = {
"	               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ ",
"	               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ ",
"	               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ "
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


const char* ShrubberyCreationForm::openFileException::what() const throw() {
	return "openFileException";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) {

	checkBureaucrat(executor);

	std::fstream fd;
	std::string nameFile = target + "_shrubbery";

	fd.open(nameFile, std::ios::out);
	if (!fd.is_open())
		throw openFileException();
	fd << tree[rand() % 3];
	fd.close();
}