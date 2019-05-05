/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:23:18 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:04:19 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}
Victim::Victim(std::string name) :
_name(name)
{
	std::cout << BCYAN;
	std::cout << "Some random victim called " << this->_name << " just popped !" << RESET;
	std::cout << std::endl;
	return ;
}
Victim::~Victim(void)
{
	std::cout << BRED;
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << RESET;
	std::cout << std::endl;
	return ;
}
Victim::Victim(Victim const & src)
{
	*this = src;
}
Victim		&Victim::operator=(Victim const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	return (*this);
}
std::string		Victim::getName(void) const 
{
	return (this->_name);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << BCYAN;
	std::cout << this->_name << " has been turned into a cute little sheep !" << RESET;
	std::cout << std::endl;
	return ;
}

std::ostream		&operator<<(std::ostream  & out, Victim const & rhs)
{
	
	out << "I'm " << rhs.getName() << " and I like otters !"  << std::endl;
	return out;
}
