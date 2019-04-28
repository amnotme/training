/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 17:31:11 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 17:31:13 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) :
_type("Default Stick")
{
  return ;
}
Weapon::Weapon(std::string type) :
_type(type)
{
  return ;
}
Weapon::~Weapon(void)
{
  return ;
}
Weapon::Weapon(Weapon const & src)
{
  *(this) = src;
}
Weapon        &Weapon::operator=(Weapon const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_type = rhs._type;
  return (*this);
}

std::string    &Weapon::getType(void)
{
  return (this->_type);
}
void           Weapon::setType(std::string type)
{
  this->_type = type;
}
