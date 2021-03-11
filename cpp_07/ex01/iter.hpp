#pragma once

#include <iostream>

template <typename T>

void f(const T &arr) {
	std::cout << "Symbol: \"" << arr << "\"" << std::endl;
}

template <typename T>

void func(T* array, unsigned int len, void (*f)(const T& arr)) {

	for(unsigned int i=0; i < len; ++i) {
		(*f)(array[i]);
	}
}
