/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:23:30 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 21:01:48 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
		public:
			Peon(std::string name);
			~Peon(void);
			Peon(Peon const & src);
			Peon &operator=(Peon const & rhs);
			//Add your public methods below here
			void	getPolymorphed(void) const;
		private:
			//Add your private methods
			Peon(void);
			//Add your private attributes below here

};

#endif
