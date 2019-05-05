/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:22:46 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:04:38 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"
# include <iostream>
# include <fstream>
# include <string>
Sorcerer::Sorcerer(void)
{
	return ;
}
Sorcerer::Sorcerer(std::string name, std::string title) :
_name(name),
_title(title)
{
	std::cout << BGREEN;
	std::cout << this->_name << ", " << this->_title << ", is born!" << RESET;
	std::cout << std::endl;
	return ;
}
Sorcerer::~Sorcerer(void)
{
	std::cout << BRED;
	std::cout << this->_name << ", " << this->_title << ", is dead.  Consequences will never be the same !" << RESET;
	std::cout << std::endl;
	return ;
}
Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
}
Sorcerer		&Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}
std::string		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void			Sorcerer::polymorph(Victim const & target) const
{
	target.getPolymorphed();
}

std::ostream		&operator<<(std::ostream  & out, Sorcerer const & rhs)
{
	out << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return out;
}
