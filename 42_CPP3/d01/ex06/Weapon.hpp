/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 17:31:20 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 17:31:21 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <string>
# include <iostream>
# include "Colors.hpp"

class Weapon
{
  public:
    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);
    Weapon(Weapon const & src);
    Weapon &operator=(Weapon const & rhs);

    std::string     &getType(void);
    void            setType(std::string type);
  private:
    std::string      _type;
};

# endif
