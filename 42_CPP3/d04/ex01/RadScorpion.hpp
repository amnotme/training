/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:10:13 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:51:43 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
		public:
			RadScorpion(void);
			~RadScorpion(void);
			RadScorpion(RadScorpion const & src);
			RadScorpion &operator=(RadScorpion const & rhs);
			//Add your public methods below here

		private:
			//Add your private methods

			//Add your private attributes below here

};

#endif
