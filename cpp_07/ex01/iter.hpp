#pragma once

#include <iostream>

template <typename T>

void f(const T &arr, unsigned int k) {
	std::cout << "Element " << k << " = \"" << arr << "\"" << std::endl;
}

template <typename T>

void func(T* array, unsigned int len, void (*f)(const T& arr, unsigned int k)) {

	for(unsigned int i=0; i < len; ++i) {
		(*f)(array[i], i);
	}
}
