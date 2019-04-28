/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 17:30:16 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 17:30:17 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include "Weapon.hpp"

class HumanA
{
  public:

    HumanA(std::string name, Weapon weapon);
    ~HumanA(void);
    HumanA(HumanA const & src);
    HumanA &operator=(HumanA const & rhs);

    std::string        getName(void) const;
    void               attack(void);
  private:
    std::string       _name;
    Weapon            _weapon;

};

# endif
