/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:08:59 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:40:15 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include "Colors.hpp"
# include <iostream>
# include <string>

class Enemy
{
		public:
			Enemy(int hp, std::string const & type);
			virtual ~Enemy(void);
			Enemy(Enemy const & src);
			Enemy &operator=(Enemy const & rhs);
			//Add your public methods below here
			std::string		getType(void) const;
			int			getHp(void) const;

			virtual	void		takeDamage(int damage);
		protected:
			//Add your private methods
			int			_hp;
			std::string		_type;
			//Add your private attributes below here
			Enemy(void);
};

#endif
