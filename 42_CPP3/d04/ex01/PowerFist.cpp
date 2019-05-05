/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:09:50 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:36:37 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PowerFist.hpp"

PowerFist::PowerFist(void) :
AWeapon("Power Fist", 8, 50)
{
	return ;
}
PowerFist::~PowerFist(void)
{
	return ;
}
PowerFist::PowerFist(PowerFist const & src)
{
	*this = src;
}
PowerFist		&PowerFist::operator=(PowerFist const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return (*this);
}
void			PowerFist::attack(void) const
{
	std::cout << BCYAN;
	std::cout << "* pschhh...SBAM! *" << RESET;
	std::cout << std::endl;
	return ;
}
