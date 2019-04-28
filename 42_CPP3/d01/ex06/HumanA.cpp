/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 17:30:06 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 17:30:07 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) :
_name(name),
_weapon(weapon)
{
  return ;
}
HumanA::~HumanA(void)
{
  return ;
}
HumanA::HumanA(HumanA const & src)
{
  (*this)= src;
}
HumanA    &HumanA::operator=(HumanA const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_name = rhs.getName();
  this->_weapon = rhs._weapon;
  return (*this);
}
std::string   HumanA::getName(void) const
{
  return (this->_name);
}
void          HumanA::attack(void)
{
  std::cout << BRED;
  std::cout << this->getName() << " attacks with his " << this->_weapon.getType();
  std::cout << RESET << std::endl;
}
