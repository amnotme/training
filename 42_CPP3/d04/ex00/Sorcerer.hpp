/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:22:46 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 21:48:09 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <fstream>
# include <iostream>
# include <string>
# include "Colors.hpp"
# include "Victim.hpp"

class Sorcerer
{
		public:
			Sorcerer(std::string name, std::string title);
			~Sorcerer(void);
			Sorcerer(Sorcerer const & src);
			Sorcerer &operator=(Sorcerer const & rhs);
			//Add your public methods below here
			std::string getName(void) const;
			std::string getTitle(void) const;

			void polymorph(Victim const & target) const;
		private:
			//Add your private methods
			Sorcerer(void);
			//Add your private attributes below here
			std::string		_name;
			std::string		_title;
};

std::ostream &operator<<(std::ostream & out, Sorcerer const & rhs);

#endif
