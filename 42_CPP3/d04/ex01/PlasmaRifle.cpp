/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:08:48 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:32:30 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) :
AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}
PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}
PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
	*this = src;
}
PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return (*this);
}
void			PlasmaRifle::attack(void) const
{
	std::cout << BBLUE;
	std::cout << "* piouuu piouuu piouuu *" << RESET;
	std::cout << std::endl;
	return ;
}
