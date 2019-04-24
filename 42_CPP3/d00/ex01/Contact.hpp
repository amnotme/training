/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <leo@42.us.org>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 02:51:48 by lhernand          #+#    #+#             */
/*   Updated: 2019/04/23 06:28:58 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "Colors.hpp"
# include <string>
# include <iostream>

class Contact
{
		public:
			Contact(void);
			~Contact(void);
			Contact(Contact const & src);
			Contact &operator=(Contact const & rhs);
			//Add your public methods below here
		
			bool	isEmpty(void);
			void	printContact(void);

			std::string getFirstName(void) const;
			std::string getLastName(void) const;
			std::string getNickName(void) const;
			std::string getLogin(void) const;
			std::string getPostalAddress(void) const;
			std::string getEmail(void) const;
			std::string getPhone(void) const;
			std::string getBirthday(void) const;
			std::string getFavoriteMeal(void) const;
			std::string getUnderwearColor(void) const;
			std::string getDarkestSecret(void) const;

			void 		setFirstName(std::string const fn);
			void		setLastName(std::string const ln);
			void		setNickName(std::string const nn);
			void		setLogin(std::string const login);
			void 		setPostalAddress(std::string const pa);
			void		setEmail(std::string const email);
			void		setPhone(std::string const ph);
			void		setBirthday(std::string const birth);
			void		setFavoriteMeal(std::string const fm);
			void		setUnderwearColor(std::string const uc);
			void		setDarkestSecret(std::string const ds);

		private:
			//Add your private methods
			std::string		_firstName;
			std::string		_lastName;
			std::string		_nickName;
			std::string		_login;
			std::string		_postalAddress;
			std::string		_email;
			std::string		_phone;
			std::string		_birthday;
			std::string		_favoriteMeal;
			std::string		_underwearColor;
			std::string		_darkestSecret;
			//Add your private attributes below here

};

#endif
