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

void 					printHeader(void)
{
	std::cout << BABLUE;
	std::cout << "----------|----------|----------|----------|" << RESET << std::endl;
	std::cout << BPURPLE;
	std::cout << "| Contact | First N  | Last N   | Nickname |" << RESET << std::endl;
	std::cout << BABLUE;
	std::cout << "----------|----------|----------|----------|" << RESET << std::endl;
}
void 					printFooter(void)
{
	std::cout << BABLUE;
	std::cout << "----------|----------|----------|----------|" << RESET << std::endl;
}
void 					makeASelection(void)
{
	std::cout << BGREEN;
	std::cout << "Please select a contact to review its information [1 - 8]: ";
	std::cout << RESET;
}
std::string 	truncate(std::string info, size_t w)
{
	size_t			len = info.length();
	size_t			diff = w - len;
	std::string	sub;

	if (len >= w)
		return (info.substr(0, w - 1)) + ".";
	else
	{
		while (diff > 0)
		{
			sub += " ";
			diff--;
		}
	}
	return (sub + info.substr(0, len));
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

void					Phonebook::add(void)
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
	}
	else
	{
		std::cout << BRED;
		std::cout << "Sorry, the phonebook is full!" << std::endl;
		std::cout << RESET;
	}
	menu();
}

void					Phonebook::search(void)
{
	std::string tempString;
	bool flag = true;
	int choice = 0;
	system("clear");
	while (flag)
	{
		if (this->_count == 0)
		{
			std::cout << BRED << "Sorry, You don't have any contacts to search. Try adding some contacts first." << RESET << std::endl;
			flag = false;
		}
		else
		{
			printContacts();
			makeASelection();
			if (std::cin.eof())
				exit(1);
			std::getline(std::cin, tempString);
			std::stringstream conversion(tempString);
			conversion >> choice;

			if (choice < 1 || choice > 8)
			{
				std::cout << BGREEN << "Returning to main menu" << RESET << std::endl;
				flag = false;
			}
			else
			{
				if (this->_contacts[choice - 1].isEmpty())
					std::cout << BYELLOW << "The contact you have chosen is empty." << RESET << std::endl;
				else
					this->_contacts[choice - 1].printContact();
			}
		}
	}
	menu();
}

void					Phonebook::printContacts(void)
{
	printHeader();
	for (int i = 0; i < MAX; i++)
	{
		std::cout << HCYAN;
		std::stringstream ss;
		ss << (i + 1);
		std::string integer = ss.str();
		std::cout << std::right << "|" << truncate(integer, 9);
		std::cout << std::right << "|" << truncate(this->_contacts[i].getFirstName(), 10);
		std::cout << std::right << "|" << truncate(this->_contacts[i].getLastName(), 10);
		std::cout << std::right << "|" << truncate(this->_contacts[i].getNickName(), 10);
		std::cout << std::right << "|" << std::endl;
		std::cout << RESET;
	}
	printFooter();
}
void					Phonebook::sortPhoneBook(void)
{
	int i = 1;
	int len = this->_count;
	bool flag = true;
	Contact temp;
	while (flag)
	{
		flag = false;
		while (i < len)
		{
			if (std::strcmp(this->_contacts[i].getFirstName().c_str(), \
			this->_contacts[i - 1].getFirstName().c_str()) < 0)
			{
				temp = this->_contacts[i - 1];
				this->_contacts[i - 1] = this->_contacts[i];
				this->_contacts[i] = temp;
				flag = true;
				i = 1;
			}
			else
			{
				i++;
			}
		}
	}
}
