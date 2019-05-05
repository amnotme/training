/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:10:33 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 23:29:41 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) :
Enemy(170, "Super Mutant")
{
	std::cout << RED;
	std::cout << "Gaaah. Me want smash heads !" << RESET;
	std::cout << std::endl;
	return ;
}
SuperMutant::~SuperMutant(void)
{
	std::cout << RED;
	std::cout << "Aaargh ..." << RESET;
	std::cout << std::endl;
	return ;
}
SuperMutant::SuperMutant(SuperMutant const & src)
{
	*this = src;
}
SuperMutant		&SuperMutant::operator=(SuperMutant const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return (*this);
}
void			SuperMutant::takeDamage(int damage)
{
	damage -= 3;
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
