#include <fstream>
#include <iostream>
#include <string>

class replace
{
private:
	std::string str;
public:
	replace();
	~replace();
	bool readStr(std::string);
	void replaceStr(std::string, std::string);
	bool writeStr(std::string);
};
