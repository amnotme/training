/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:10:33 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:46:57 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
		public:
			SuperMutant(void);
			~SuperMutant(void);
			SuperMutant(SuperMutant const & src);
			SuperMutant &operator=(SuperMutant const & rhs);
			//Add your public methods below here
			void		takeDamage(int damage);
		private:
			//Add your private methods

			//Add your private attributes below here

};

#endif
