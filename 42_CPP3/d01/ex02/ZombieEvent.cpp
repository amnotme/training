/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 23:13:14 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 23:13:16 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _type("Default")
{
  std::srand(std::time(nullptr));
  return ;
}
ZombieEvent::~ZombieEvent(void)
{
  return ;
}
ZombieEvent::ZombieEvent(ZombieEvent const & src)
{
  *(this) = src;
}
ZombieEvent  &ZombieEvent::operator=(ZombieEvent const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_type = rhs.getZombieEventType();
  return (*this);
}
void          ZombieEvent::setZombieType(std::string type)
{
  this->_type = type;
}

std::string   ZombieEvent::getZombieEventType(void) const
{
  return (this->_type);
}

Zombie        *ZombieEvent::newZombie(std::string name)
{
  Zombie *newZombie = new Zombie(name, this->getZombieEventType());
  return (newZombie);
}

Zombie        *ZombieEvent::randomChump(void)
{

	std::string ranNames[7] = {"Lust", "Sloth", "Envy", "Anger","Pride",
						"Covetousness", "Gluttony"};

	Zombie *zom = new Zombie(ranNames[rand() % 6], this->_type);
	zom->announce();
  return (zom);
}
