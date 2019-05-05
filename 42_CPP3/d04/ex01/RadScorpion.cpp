/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:10:13 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:54:38 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) :
Enemy(80, "RadScorpion")
{
	std::cout << BGREEN;
	std::cout << "* click click click *" << RESET;
	std::cout << std::endl;
	return ;
}
RadScorpion::~RadScorpion(void)
{
	std::cout << BGREEN;
	std::cout << "* SPROTCH *" << RESET;
	std::cout << std::endl;
	return ;
}
RadScorpion::RadScorpion(RadScorpion const & src)
{
	*this = src;
}
RadScorpion		&RadScorpion::operator=(RadScorpion const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);
}
