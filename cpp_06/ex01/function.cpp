#include "function.hpp"

#define STRING sizeof(std::string) * 8

std::string random_str() {
	std::string str;
	const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; ++i) 
		str += alphanum[rand() % (sizeof(alphanum) - 1)];

	return str; 
}

void * serialize(void) {
	char *raw = new char[sizeof(std::string) * 8 + sizeof(int) + sizeof(std::string) * 8];
	std::string str = random_str();

	
	for (int i=0; i < 8; ++i) {
		raw[i] = str[i];
	}

	*reinterpret_cast<int*>(raw + sizeof(std::string) * 8) = rand();

	str = random_str();
	for (int i=0; i < 8; ++i) {
		raw[i + sizeof(std::string) * 8 + sizeof(int)] = str[i];
	}
	return static_cast<void *>(raw);
}

Data * deserialize(void * raw) {
	Data *data = new Data;

	data->s1 = std::string(static_cast<char *>(raw), sizeof(std::string) * 8);
	data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + sizeof(std::string) * 8);
	data->s2 = std::string(static_cast<char *>(raw) + sizeof(std::string) * 8 + sizeof(int), sizeof(std::string) * 8);
	return data;
}