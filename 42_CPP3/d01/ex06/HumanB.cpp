/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 17:30:28 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 17:30:31 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
_name(name)
{
  return ;
}

HumanB::~HumanB(void)
{
  return ;
}
HumanB::HumanB(HumanB const & src)
{
  (*this)= src;
}
HumanB    &HumanB::operator=(HumanB const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_name = rhs.getName();
  this->_weapon = rhs._weapon;
  return (*this);
}
std::string   HumanB::getName(void) const
{
  return (this->_name);
}
void          HumanB::setWeapon(Weapon &weapon)
{
  this->_weapon = &weapon;
}
void          HumanB::attack(void)
{
  std::cout << BGREEN;
  std::cout << this->getName() << " attacks with his " << this->_weapon->getType();
  std::cout << RESET << std::endl;
}
