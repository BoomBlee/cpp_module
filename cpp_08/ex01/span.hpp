#include <iostream>
#include <vector>


class Span
{
private:
	unsigned int N;
	std::vector<int> vect;
public:
	Span();
	Span(unsigned int);
	~Span();
	void addNumber(int);
	void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
	int longestSpan();
	int shortestSpan();
	class errorArg : public std::exception {virtual const char* what() const throw();};
	class maxSize : public std::exception {virtual const char* what() const throw();};
	class invalidIter : public std::exception {virtual const char* what() const throw();};
};
