/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcaraway <kcaraway@student.21-school.r>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 03:50:57 by kcaraway          #+#    #+#             */
/*   Updated: 2021/01/18 04:56:11 by kcaraway         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i=1; av[i]; i++){
		for (int j=0; av[i][j]; j++)
			if (islower(av[i][j]))
				av[i][j]-=32;
	std::cout << av[i];
	}
	std::cout << std::endl;
	return 0;
}
