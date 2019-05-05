/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:08:29 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 23:28:49 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(void)
{
	return ;
}
Character::Character(std::string const & name) :
_name(name),
_ap(40),
_weapon(NULL)
{
	return ;
}
Character::~Character(void)
{
	return ;
}
Character::Character(Character const & src)
{
	*this = src;
}
Character		&Character::operator=(Character const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_weapon = rhs._weapon;
	return (*this);
}

std::string		Character::getName(void) const
{
	return (this->_name);
}

AWeapon			*Character::getWeapon(void) const
{
	return (this->_weapon);
}

void			Character::recoverAP(void) 
{
	this->_ap += 40;
}

void			Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void			Character::attack(Enemy *target)
{
	if (this->_weapon == NULL || target == NULL)
		return ;
	if (this->_ap >= this->_weapon->getAPCost())
	{
		this->_ap -= this->_weapon->getAPCost();
		std::cout << BCYAN;
		std::cout << this->_name << " attacks " << target->getType() << " with a ";
		std::cout << this->_weapon->getName() << RESET;
		std::cout << std::endl;
		this->_weapon->attack();
		target->takeDamage(this->_weapon->getDamage());
		if (target->getHp() <= 0)
			delete target;	
	}
	else
	{
		std::cout << BRED;
		std::cout << this->_name << " --NOT enough AP-- " << this->_ap << std::endl;
		std::cout << "You need: " << this->_weapon->getAPCost() << " to use: " << this->_weapon->getName() << RESET;
		std::cout << std::endl;
	}
}
int			Character::getAP(void) const
{
	return (this->_ap);
}

std::ostream		&operator<<(std::ostream & out, Character const & rhs)
{
	std::cout << BCYAN;
	if (rhs.getWeapon() == NULL)
		out << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	else
		out << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	std::cout << RESET;
	return (out);
}
