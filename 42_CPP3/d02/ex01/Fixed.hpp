/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:48:00 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/02 21:48:03 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
# define BRED "\033[1;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"
# define RESET "\033[0m"

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);
		Fixed(Fixed const & src);
		Fixed &operator=(Fixed const & rhs);

		int 					getRawBits(void) const;
		int 					toInt(void) const;
		float 				toFloat(void) const;
		void 				setRawBits(int const raw);

	private:
		int					_fixedNumber;
		static const uint8_t 	_bits;
};

std::ostream			&operator<<(std::ostream & lhs, Fixed const & rhs);
#endif
