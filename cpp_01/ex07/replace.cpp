#include "replace.hpp"

replace::replace()
{
}

replace::~replace()
{
}

bool replace::readStr(std::string fileName) {
	std::fstream fd;
	std::string  line;

	fd.open(fileName);
	if (!fd.is_open())
		return false;
	while (1)
	{
		std::getline(fd,line);
		this->str.append(line);
		if (fd.eof())
			break;
		this->str.append("\n");
	}
	fd.close();
	return true;
}

void replace::replaceStr(std::string src, std::string dst) {
	size_t k=0;
	std::string	copy =this->str;

	this->str = "";
	for (size_t i = 0; i < copy.length(); i++) {
		i = copy.find(src, k);
		if (i == std::string::npos) {
			this->str.append(copy.substr(k, copy.length()-k));
			break;
		}
		this->str.append(copy.substr(k, i-k));
		k = i + src.length();
		this->str.append(dst);
	}
}

bool replace::writeStr(std::string fileName) {
	std::fstream fd;

	fileName.append(".replace");
	fd.open(fileName, std::ios::out);
	if (!fd.is_open())
		return false;
	fd << this->str;
	fd.close();
	return true;
}