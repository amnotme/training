/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 03:50:11 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 03:50:13 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_

# include "Brain.hpp"

class Human
{
  public:
    Human(void);
    ~Human(void);
    Human(Human const & src);
    Human &operator=(Human const & rhs);

    Brain       getBrain(void) const;
    std::string identify(void);

  private:

    Brain      _brain;
};

#endif
