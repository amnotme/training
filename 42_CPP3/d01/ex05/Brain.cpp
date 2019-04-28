/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 03:49:44 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 03:49:45 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : _thought("Random Thought")
{
  std::ostringstream buff;
  buff << this;
  this->_address = buff.str();
  return ;
}
Brain::~Brain(void)
{
  return ;
}
Brain::Brain(Brain const & src)
{
  (*this) = src;
}
Brain      &Brain::operator=(Brain const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_thought = rhs.getThought();
  this->_address = rhs._address;
  return (*this);
}

void        Brain::setThought(std::string thought)
{
  this->_thought = thought;
}

std::string Brain::getThought(void) const
{
  return (this->_thought);
}

std::string Brain::identify(void)
{
  return (this->_address);
}
