/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:11:16 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:28:09 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include "Colors.hpp"
# include <string>
# include <iostream>

class AWeapon
{
		public:
			AWeapon(std::string const & name, int apcost, int damage);
			virtual ~AWeapon(void);
			AWeapon(AWeapon const & src);
			AWeapon &operator=(AWeapon const & rhs);
			//Add your public methods below here
			virtual void		attack(void) const = 0;
			std::string 		getName(void) const;
			int			getAPCost(void) const;
			int			getDamage(void) const;

		protected:
			//Add your private methods
			AWeapon(void);
			//Add your private attributes below here
			std::string		_name;
			int			_apcost;
			int			_damage;
};

#endif
