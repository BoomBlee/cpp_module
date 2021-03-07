#pragma once

#include <iostream>

#ifndef COLOR
# define COLOR

# define RED "\33[1;31m"
# define GREEN "\33[1;32m"
# define YELLOW "\33[1;33m"
# define BLUE "\33[1;34m"
# define CIAN "\33[1;36m"
# define RESET "\33[0m"
#endif

template <typename T>

class Array
{
private:
	unsigned int len;
	T *mass;
public:
	Array();
	Array(unsigned int);
	Array(Array&);
	~Array();
	T &operator[](const unsigned int index);
	class invalidIndex : public std::exception {virtual const char* what() const throw();};
	unsigned int size() const;
	T &operator=(const Array&);
};

template <typename T>
Array<T>::Array() : len(0), mass(nullptr)
{
}

template <typename T>
Array<T>::Array(unsigned int len) : len(len) {
	this->mass = new T[len];
}

template <typename T>
Array<T>::Array(Array& obj) {
	this->len = obj.len;
	if (obj.mass) {
		this->mass = new T[len];
		for (unsigned int i = 0; i < len; ++i)
			this->mass[i] = obj.mass[i];
	}
}

template <typename T>
T &Array<T>::operator[](const unsigned int index){

	if (index < 0 || index >= len)
		throw invalidIndex();
	return mass[index];
}

template <typename T>
T &Array<T>::operator=(const Array& obj){
	this->len = obj.len;
	if (obj.mass) {
		this->mass = new T[len];
		for (unsigned int i = 0; i < len; ++i)
			this->mass[i] = obj.mass[i];
	}
	return *this;
}

template <typename T>
const char* Array<T>::invalidIndex::what() const throw() {
	return "Invalid Index Array";
}

template <typename T>
unsigned int Array<T>::size() const {
	return len;
}


template <typename T>
Array<T>::~Array() {
	if (len > 0)
		delete [] this->mass;
}
