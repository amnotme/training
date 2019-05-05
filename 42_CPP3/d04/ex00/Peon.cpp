/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:23:30 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:06:09 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Peon.hpp"

Peon::Peon(void) :
Victim() 
{
	return ;
}
Peon::Peon(std::string name) :
Victim(name)
{
	std::cout << BBLUE;
	std::cout << "Zog zog." << RESET;
	std::cout << std::endl;
	return ;
}
Peon::~Peon(void)
{
	std::cout << BBLUE;
	std::cout << "Bleuark..." << RESET;
	std::cout << std::endl;
	return ;
}
Peon::Peon(Peon const & src)
{
	*this = src;
}
Peon		&Peon::operator=(Peon const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	return (*this);
}

void		Peon::getPolymorphed(void) const 
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
