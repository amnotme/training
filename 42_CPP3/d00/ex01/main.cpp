/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <leo@42.us.org>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 02:54:15 by lhernand          #+#    #+#             */
/*   Updated: 2019/04/23 06:24:39 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

std::string down(std::string str)
{
	int 				len = str.length();
	std::string newStr;

	for (int i = 0; i < len; i++)
		newStr += (char)std::tolower(str[i]);
	return (newStr);
}

int		main(void)
{

	system("clear");

	Phonebook phone;
	std::string temp;
	std::string strChoice;
	int choice = 0;

	while (choice != 3)
	{
		if (std::cin.eof())
			exit(1);
		std::getline(std::cin, temp);
		strChoice = down(temp);
		std::stringstream conversion(temp);
		conversion >> choice;

		if (choice == 1 || strChoice == "add")
			phone.add();
		else if (choice == 2 || strChoice == "search")
			phone.search();
		else if (choice == 3 || strChoice == "exit")
			break ;
		else
		 	std::cout << BRED << "Invalid Choice. Please make a valid selection" << RESET << std::endl;
	}
	std::cout << BBLUE << "Thanks for using AwesomePhoneBook" << RESET << std::endl;
	return (0);
}
