#include "Convert.hpp"

void Convert::printFromChar() const {
	const char chr = *str.c_str();

	std::cout << "char : " << chr << std::endl;
	std::cout << "int : " << static_cast<int>(chr) << std::endl;
	std::cout << "float : " << static_cast<float>(chr) << ".0f"<< std::endl;
	std::cout << "double : " << static_cast<double>(chr) << ".0" << std::endl;
}

void Convert::printFromInt() const {
	const int intt = atoi(str.c_str());

	std::cout << "char : ";
	if (isprint(intt))
		std::cout << static_cast<char>(intt) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int : " << intt << std::endl;
	if (intt > 999999) {
		std::cout << "float : " << static_cast<float>(intt) << "f"<< std::endl;
		std::cout << "double : " << static_cast<double>(intt) << std::endl;
	}
	else {
		std::cout << "float : " << static_cast<float>(intt) << ".0f"<< std::endl;
		std::cout << "double : " << static_cast<double>(intt) << ".0" << std::endl;
	}
}
void Convert::printFromFloat() const {
	const float f = atof(str.c_str());

	std::cout << "char : ";
	if (isprint(f))
		std::cout << static_cast<char>(f) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int : " << static_cast<int>(f) << std::endl;

	int temp = static_cast<int>(f);
	if (temp * 10000 == f * 10000) {
		std::cout << "float : " << f << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << ".0" << std::endl;
	}
	else {
		std::cout << "float : " << f << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
	}
}
void Convert::printFromDouble() const {
	const double doub = atof(str.c_str());

	std::cout << "char : ";
	if (isprint(doub))
		std::cout << static_cast<char>(doub) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int : " << static_cast<int>(doub) << std::endl;
	
	int temp = static_cast<int>(doub);
	if (temp * 10000 == doub * 10000) {

	}
	else {
		std::cout << "float : " << static_cast<float>(doub) << "f" << std::endl;
		std::cout << "double : " << doub << std::endl;
	}
}
void Convert::printFromLiteral() const {
	std::cout << "char : " << "impossible" << std::endl;
	std::cout << "int : " << "impossible" << std::endl;
	if (type == LITERAL_DOUBLE) {
		double ff = atof(str.c_str());
		std::cout << "float : " << static_cast<float>(ff) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(ff) << std::endl;
	}
	else {
		float fff = atof(str.c_str());
		std::cout << "float : " << fff << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(fff) << std::endl;
	}
}

Convert::Convert(std::string string) : type(ERROR), str(string){
	this->findType();
	if (type == CHAR)
		this->printFromChar();
	else if (type == INT)
		this->printFromInt();
	else if (type == FLOAT)
		this->printFromFloat();
	else if (type == DOUBLE)
		this->printFromDouble();
	else if (type == LITERAL_FLOAT || type == LITERAL_DOUBLE)
		this->printFromLiteral();
	else {
		ERROR;
	}
}

Convert::~Convert() {
}

void Convert::findType() {
	if (str.length() == 1 && !std::isdigit(*str.c_str())) {
		type = CHAR;
		return ;
	}
	else if (!strcmp(str.c_str(), "-inff") || !strcmp(str.c_str(), "+inff") || !strcmp(str.c_str(), "nanf")) {
		type = LITERAL_FLOAT;
		return ;
	}
	else if (!strcmp(str.c_str(), "-inf") || !strcmp(str.c_str(), "+inf") || !strcmp(str.c_str(), "nan")) {
		type = LITERAL_DOUBLE;
		return ;
	}

	int len = str.length();
	int i = 0;
	if (str[0] == '-' || str[0] == '+')
		++i;
	for (; i < len; i++) {
		if (std::isdigit(str.c_str()[i]) && type != 4 && type != 3)
			type = INT;
		else if (str.c_str()[i] == '.' && type != 4 && type != 3)
			type = DOUBLE;
		else if (str.c_str()[i] == 'f' && type == 4)
			type = FLOAT;
		else if (!std::isdigit(str.c_str()[i])) {
			type = ERROR;
			throw errorType();
		}
	}
}

const char* Convert::errorType::what() const throw() {
	return "Invalid Argument";
}