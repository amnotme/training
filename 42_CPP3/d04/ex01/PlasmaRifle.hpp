/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:08:48 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:30:10 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
		public:
			PlasmaRifle(void);
			~PlasmaRifle(void);
			PlasmaRifle(PlasmaRifle const & src);
			PlasmaRifle &operator=(PlasmaRifle const & rhs);
			//Add your public methods below here
			void		attack(void) const;
		private:
			//Add your private methods

			//Add your private attributes below here

};

#endif
