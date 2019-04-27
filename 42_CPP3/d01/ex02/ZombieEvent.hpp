/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 23:13:25 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 23:13:26 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_HPP_
# define _ZOMBIEEVENT_HPP_

# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent
{
  public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    ZombieEvent(ZombieEvent const & src);
    ZombieEvent &operator=(ZombieEvent const & rhs);

    std::string   getZombieEventType(void) const;

    void          setZombieType(std::string type);
    Zombie        *newZombie(std::string name);
    Zombie        *randomChump(void);

  private:

    std::string     _type;
};

# endif
