/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 21:41:36 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 21:41:38 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) : _name("default")
{
  std::cout << GREEN << "A pony has been born" << RESET << std::endl;
  return ;
}

Pony::~Pony(void)
{
  std::cout << RED << "A pony has died" << RESET << std::endl;
  return ;
}

std::string  Pony::getName(void) const
{
  return (this->_name);
}
void         Pony::setName(std::string name)
{
  (this->_name = name);
}

Pony         ponyOnTheStack(void)
{
  Pony new_pony_on_the_stack;
  std::cout << CYAN <<  "created a pony on the stack" << RESET << std::endl;
  return (new_pony_on_the_stack);
}

Pony         *ponyOnTheHeap(void)
{
  Pony *new_pony_on_the_heap = new Pony();
  std::cout << YELLOW << "created a pony on the heap" << RESET << std::endl;
  return (new_pony_on_the_heap);
}
