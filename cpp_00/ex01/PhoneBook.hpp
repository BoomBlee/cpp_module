/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcaraway <kcaraway@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 06:02:00 by kcaraway          #+#    #+#             */
/*   Updated: 2021/01/18 10:52:51 by kcaraway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

class phoneBook
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;

public:
	phoneBook(/* args */);
	~phoneBook();
	void functionAdd();
	void func(std::string msg, std::string &name);
	void functionPrint(int k);
	void functionPrintFull(int k);
};

phoneBook::phoneBook(/* args */) {
}

phoneBook::~phoneBook()
{
}

void phoneBook::func(std::string msg, std::string &name)
{
	std::cout << "\033[33m" << msg << "\033[0m" << ":";
	std::getline(std::cin, name);
	
}

void phoneBook::functionAdd(){
	std::string	*names[] = {&firstName, &lastName, &nickname, &login, &postalAddress, &emailAddress, &phoneNumber, &birthdayDate, &favoriteMeal, &underwearColor, &darkestSecret};
	std::string	msg[] = {"firstName", "lastName", "nickname", "login", "postalAddress", "emailAddress", "phoneNumber", "birthdayDate", "favoriteMeal", "underwearColor", "darkestSecret"};
	for (size_t i = 0; i < 11; i++) {
		func(msg[i], *names[i]);
		// std::cout << *names[i] << std::endl;
	}
}

void phoneBook::functionPrint(int k){
	std::string	*names[] = {&firstName, &lastName, &nickname, &login, &postalAddress, &emailAddress, &phoneNumber, &birthdayDate, &favoriteMeal, &underwearColor, &darkestSecret};
	std::string	msg[] = {"firstName", "lastName", "nickname", "login", "postalAddress", "emailAddress", "phoneNumber", "birthdayDate", "favoriteMeal", "underwearColor", "darkestSecret"};
	std::string str;
	std::cout << "|" << k << "         "<<"|";
	for (int i=0; i<3;i++){
		int len=names[i]->length();
		//std::cout <<"\'"<< len<<"\'";
		if (len < 11){
			std::cout << names[i]->substr(0,len);
			for (int j=0; j+len<10; j++)
				std::cout << " ";
			std::cout << "|";
		}
		else{
			std::cout << names[i]->substr(0,9);
			std::cout << ".|";
		}
	}
	std::cout << std::endl;
}

void phoneBook::functionPrintFull(int k){
	std::string	*names[] = {&firstName, &lastName, &nickname, &login, &postalAddress, &emailAddress, &phoneNumber, &birthdayDate, &favoriteMeal, &underwearColor, &darkestSecret};
	std::string	msg[] = {"firstName", "lastName", "nickname", "login", "postalAddress", "emailAddress", "phoneNumber", "birthdayDate", "favoriteMeal", "underwearColor", "darkestSecret"};
	std::string str;
	for (int i=0; i<11;i++){
		std::cout << "\033[33m" << msg[i] << "\033[0m" << ":";
		std::cout << *names[i] << std::endl;
	}
	std::cout << std::endl;
}