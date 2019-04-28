/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 17:30:42 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 17:30:49 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include "Weapon.hpp"

class HumanB
{
  public:

    HumanB(std::string name);
    ~HumanB(void);
    HumanB(HumanB const & src);
    HumanB &operator=(HumanB const & rhs);

    std::string        getName(void) const;
    void               setWeapon(Weapon &weapon);
    void               attack(void);
  private:
    std::string       _name;
    Weapon            *_weapon;

};

# endif
