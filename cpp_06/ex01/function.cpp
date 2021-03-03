#include "function.hpp"

char * random_str() {
	std::string str;
	const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; ++i) 
		str += alphanum[rand() % (sizeof(alphanum) - 1)];

	return (char *)str.c_str(); 
}

void * serialize(void) {
	char *raw = new char[20];
	char *str = random_str();

	
	for (int i=0; i < 8; ++i) {
		raw[i] = str[i];
	}

	*reinterpret_cast<int*>(raw + 8) = rand();

	str = random_str();
	for (int i=0; i < 8; ++i) {
		raw[i+12] = str[i];
	}
	return raw;
}

Data * deserialize(void * raw) {
	Data *data = new Data;

	data->s1 = std::string(static_cast<char *>(raw), 8);
	data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	data->s2 = std::string(static_cast<char *>(raw) + 12, 8);
	return data;
}