#include "span.hpp"

Span::Span()
{
}

Span::Span(unsigned int number) : N(number)
{
}

Span::~Span()
{
}

void Span::addNumber(int number) {
	if (vect.size() < N)
		vect.push_back(number);
	else
		throw maxSize();
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	if (start > end)
		throw invalidIter();
	for (; start != end; ++start) {
		if (vect.size() >= N)
			throw maxSize();
		vect.push_back(*start);
	}
}

int Span::longestSpan() {
	if (vect.size() < 2)
		throw errorArg();
	std::sort(vect.begin(),vect.end());
	return *(vect.end() - 1) - *vect.begin();
}

int Span::shortestSpan() {
	int min = INT_MAX;

	if (vect.size() < 2)
		throw errorArg();
	std::sort(vect.begin(),vect.end());
	for (unsigned int i=0; i+1 < vect.size(); ++i)
		if (vect[i+1] - vect[i] < min)
			min = vect[i+1] - vect[i];
	return min;
}

const char* Span::maxSize::what() const throw() {
	return "maxSize";
}


const char* Span::errorArg::what() const throw() {
	return "lack of arguments";
}

const char* Span::invalidIter::what() const throw() {
	return "invalid Iteration";
}
