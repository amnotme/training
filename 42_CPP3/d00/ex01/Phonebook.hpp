/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <leo@42.us.org>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 02:52:52 by lhernand          #+#    #+#             */
/*   Updated: 2019/04/23 06:28:17 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX 8
# include "Contact.hpp"

class Phonebook
{
		public:
			Phonebook(void);
			~Phonebook(void);
			Phonebook(Phonebook const & src);
			Phonebook &operator=(Phonebook const & rhs);
			//Add your public methods below here

			void	add(void);
			void	printContacts(void);
			void 	search(void);
			void	sortPhoneBook(void);

		private:
			//Add your private methods

			//Add your private attributes below here
			int		_count;
			Contact	_contacts[MAX];
};

#endif
