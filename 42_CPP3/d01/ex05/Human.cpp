/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 03:50:02 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 03:50:03 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) : _brain(Brain())
{
  return ;
}
Human::~Human(void)
{
  return ;
}
Human::Human(Human const & src)
{
  (*this) = src;
}
Human       &Human::operator=(Human const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_brain = rhs.getBrain();
  return (*this);
}
Brain        Human::getBrain(void) const
{
  return (this->_brain);
}
std::string  Human::identify(void)
{
  return (this->getBrain().identify());
}
