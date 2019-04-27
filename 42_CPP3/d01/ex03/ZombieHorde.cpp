/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 02:30:17 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 02:30:18 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
  this->_zombies = new Zombie[N];
  std::cout << BAGREEN << "A Zombie horde has appeared" << RESET << std::endl;
  return ;
}
ZombieHorde::~ZombieHorde(void)
{
  delete [] this->_zombies;
  std::cout << BARED << "The Zombie horde has been vanquished" << RESET << std::endl;
  return;
}
ZombieHorde::ZombieHorde(ZombieHorde const & src)
{
  (*this) = src;
}
ZombieHorde   &ZombieHorde::operator=(ZombieHorde const & rhs)
{
  if (this == &rhs)
    return (*this);
  this->_N = rhs._N;
  this->_zombies = rhs._zombies;
  return (*this);
}
void          ZombieHorde::announce(void)
{
  for (int i = 0; i < this->_N; i++)
    this->_zombies[i].announce();
}
