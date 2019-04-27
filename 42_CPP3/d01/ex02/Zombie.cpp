/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 23:12:45 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 23:12:47 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) :
_name(name),
_type(type)
{
  std::cout << BGREEN;
  std::cout << "Zombie: " << BCYAN << this->_name << BGREEN << " has been created" << std::endl;
  std::cout << RESET;
}
Zombie::~Zombie(void)
{
  std::cout << BRED;
  std::cout << "Zombie " << BCYAN << this->_name << BRED << " has been destroyed" << std::endl;
  std::cout << RESET;
}
Zombie::Zombie(Zombie const & src)
{
  *(this) = src;
}
Zombie  &Zombie::operator=(Zombie const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_name = rhs.getName();
  this->_type = rhs.getType();
  return (*this);
}
std::string   Zombie::getName(void) const
{
  return (this->_name);
}
std::string   Zombie::getType(void) const
{
  return (this->_type);
}
void          Zombie::announce(void)
{
  std::cout << BYELLOW;
  std::cout << "<" << this->getName();
  std::cout << BWHITE;
  std::cout << " (";
  std::cout << BCYAN;
  std::cout << this->getType();
  std::cout << BWHITE;
  std::cout << ")";
  std::cout << BYELLOW;
  std::cout << "> ";
  std::cout << BARED;
  std::cout << "Braiiiiiiinnnssss...";
  std::cout << RESET << std::endl;
}
