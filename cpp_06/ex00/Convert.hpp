#pragma once

#include <iostream>

#define ERROR 0
#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define LITERAL_FLOAT 5
#define LITERAL_DOUBLE 6

#ifndef COLOR
# define COLOR

# define RED "\33[1;31m"
# define GREEN "\33[1;32m"
# define YELLOW "\33[1;33m"
# define BLUE "\33[1;34m"
# define CIAN "\33[1;36m"
# define RESET "\33[0m"
#endif

class Convert
{
private:
	short int type;
	std::string str;

public:
	Convert(std::string);
	~Convert();
	void findType();
	void printFromChar() const;
	void printFromInt() const;
	void printFromFloat() const;
	void printFromDouble() const;
	void printFromLiteral() const;
	class errorType : public std::exception {virtual const char* what() const throw();};
};
