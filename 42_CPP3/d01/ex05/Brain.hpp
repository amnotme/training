/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 03:49:50 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 03:49:53 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>

class Brain
{
  public:
    Brain(void);
    ~Brain(void);
    Brain(Brain const & src);
    Brain &operator=(Brain const & rhs);

    void        setThought(std::string thought);
    std::string getThought(void) const;
    std::string identify(void);
  private:
    std::string   _thought;
    std::string   _address;
};

# endif
