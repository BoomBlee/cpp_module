#include <iostream>
#include <string>

int main(){
	std::string	p = "HI THIS IS BRAIN";
	std::string	t = "ttttttttt";
	std::string	*pointer = &p;
	std::string	&reference = p;

	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;

	std::cout << "---------------" << std::endl;
	p = "rewrite";
	std::cout << *pointer << std::endl; 
	std::cout << reference << std::endl;
	
	reference = t; //p=t
	std::cout << reference << std::endl; 
	std::cout << p << std::endl; 

	std::cout << "---------------" << std::endl;
	pointer = &t;
	std::cout << *pointer << std::endl; 
	std::cout << t << std::endl;

}