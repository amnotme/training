/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:09:50 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:34:06 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
		public:
			PowerFist(void);
			~PowerFist(void);
			PowerFist(PowerFist const & src);
			PowerFist &operator=(PowerFist const & rhs);
			//Add your public methods below here
			void		attack(void) const;
		private:
			//Add your private methods

			//Add your private attributes below here

};

#endif
