/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:08:29 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 23:27:17 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
		public:
			Character(std::string const & name);
			~Character(void);
			Character(Character const & src);
			Character &operator=(Character const & rhs);
			//Add your public methods below here
			std::string		getName(void) const;
			AWeapon			*getWeapon(void) const;
	
			void			recoverAP(void);
			void			equip(AWeapon *weapon);
			void			attack(Enemy *target);
			int			getAP(void) const;		
		private:
			//Add your private methods
			Character(void);
			//Add your private attributes below here
			std::string		_name;
			int			_ap;
			AWeapon			*_weapon;

};

std::ostream		&operator<<(std::ostream & out, Character const & rhs);
#endif
