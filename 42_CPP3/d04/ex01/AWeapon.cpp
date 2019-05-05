/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:11:16 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:27:58 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}
AWeapon::AWeapon(std::string const & name, int apcost, int damage) : 
_name(name),
_apcost(apcost),
_damage(damage)
{
	return ;
}
AWeapon::~AWeapon(void)
{
	return ;
}
AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}
AWeapon		&AWeapon::operator=(AWeapon const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return (*this);
}
std::string	AWeapon::getName(void) const 
{
	return (this->_name);
}

int		AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int		AWeapon::getDamage(void) const
{
	return (this->_damage);
}

void		AWeapon::attack(void) const
{
	return ;
}
