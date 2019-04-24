/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <leo@42.us.org>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 02:52:52 by lhernand          #+#    #+#             */
/*   Updated: 2019/04/23 06:28:42 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"
# include "Contact.hpp"

void		menu(void)
{
	std::cout << BAGREEN;
	std::cout << "Welcome to your Phonebook" << RESET << BGREEN << std::endl;
	std::cout << "Please make a selection from the following: " << std::endl;
	std::cout << "To add a contact: type [1] or 'add' " << std::endl;
	std::cout << "To search for a contact: type [2] or 'search' " << std::endl;
	std::cout << "To exit your digital phonebook: type [3] or 'exit' " << std::endl;
	std::cout << RESET;
}
Phonebook::Phonebook(void) : _count(0)
{
	menu();	
	return ;
}
Phonebook::~Phonebook(void)
{
	return ;
}
Phonebook::Phonebook(Phonebook const & src)
{
	*this = src;
}
Phonebook		&Phonebook::operator=(Phonebook const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

void		Phonebook::add(void)
{
	std::string tempString;

	system("clear");
	if (this->_count < 8)
	{
		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "First Name: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setFirstName(tempString);
		
		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Last Name: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setLastName(tempString);
		
		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Nickname: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setNickName(tempString);

		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Intra: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setLogin(tempString);

		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Address: " << RESET;
		std::getline(std::cin,tempString);
		this->_contacts[this->_count].setPostalAddress(tempString);

		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Email: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setEmail(tempString);

		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Phone: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setPhone(tempString);

		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Birthday: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setBirthday(tempString);

		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Favorite Meal: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setFavoriteMeal(tempString);

		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Underwear Color: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setUnderwearColor(tempString);
		
		if (std::cin.eof())
			exit(1);
		std::cout << BYELLOW << "Darkest Secret: " << RESET;
		std::getline(std::cin, tempString);
		this->_contacts[this->_count].setDarkestSecret(tempString);
		
		this->_count += 1;
		this->sortPhoneBook();
		system("clear");
		menu();
	}
	else
	{
		std::cout << BRED;
		std::cout << "Sorry, the phonebook is full!" << std::endl;
		std::cout << RESET;
		return ;
	}
}

void		Phonebook::search(void)
{

}
void		Phonebook::printContacts(void)
{

}
void		Phonebook::sortPhoneBook(void)
{

}

