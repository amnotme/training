/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:08:59 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 23:29:22 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}
Enemy::Enemy(int hp, std::string const & type) :
_hp(hp),
_type(type)
{
	return ;
}
Enemy::~Enemy(void)
{
	return ;
}
Enemy::Enemy(Enemy const & src)
{
	*this = src;
}
Enemy		&Enemy::operator=(Enemy const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);
}
int		Enemy::getHp(void) const
{
	return (this->_hp);
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

void		Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		if (damage >= _hp)
		{
			this->_hp = 0;
		}
		else
		{
			this->_hp -= damage;
		}
	}
}
