/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcaraway <kcaraway@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 05:19:13 by kcaraway          #+#    #+#             */
/*   Updated: 2021/01/18 10:48:23 by kcaraway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include "PhoneBook.hpp"
int	main(){
	std::string str;
	phoneBook	book[8];
	int i=0;
	
	while (1){
		std::getline(std::cin, str);
		if (std::cin.eof() || str == "EXIT")
			break;
		if (str == "ADD"){
			if (i > 7)
				std::cout << "PhoneBook full" << std::endl;
			else
				book[i++].functionAdd();
		}
		else if (str == "SEARCH"){
			std::cout << "---------------------------------------------"<< std::endl;
			std::cout << "|  INDEX   |FIRST NAME|LAST NAME | NICKNAME |"<< std::endl;
			std::cout << "---------------------------------------------"<< std::endl;
			for (size_t k = 0; k < i; k++)
				book[k].functionPrint(k);
			if (i!=0){
				std::getline(std::cin, str);
				if (std::atoi(str.c_str()) < i && str.empty() == false && std::isdigit(str[0]) && str.length() == 1)
					book[std::atoi(str.c_str())].functionPrintFull(std::atoi(str.c_str()));
				else
					std::cout << "Invalid Index" << std::endl;
			}
		}
	}
	return 0;
}
