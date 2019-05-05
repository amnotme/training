/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:23:18 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 22:05:11 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include "Colors.hpp"
# include <iostream>
# include <string>
# include <fstream>

class Victim
{
		public:
			Victim(std::string name);
			~Victim(void);
			Victim(Victim const & src);
			Victim &operator=(Victim const & rhs);
			//Add your public methods below here
			std::string getName(void) const;

			virtual void getPolymorphed(void) const;
		protected:
			//Add your private methods
			Victim(void);
			//Add your private attributes below here
			std::string 		_name;
};

std::ostream		&operator<<(std::ostream & out, Victim const & rhs);
#endif
