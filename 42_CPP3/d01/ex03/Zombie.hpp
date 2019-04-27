/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 23:13:04 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 23:13:06 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string>
# include "Colors.hpp"

class Zombie
{
  public:
    Zombie(void);
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    Zombie(Zombie const & src);
    Zombie &operator=(Zombie const & rhs);

    void  announce(void);
    std::string     getName(void) const;
    std::string     getType(void) const;

  private:

    std::string     _name;
    std::string     _type;
};

# endif
