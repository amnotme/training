/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 02:30:25 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 02:30:27 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEHORDE_HPP_
# define _ZOMBIEHORDE_HPP_

# include "Zombie.hpp"
# include <cstdlib>
class ZombieHorde
{
  public:
    ZombieHorde(int N);
    ~ZombieHorde(void);
    ZombieHorde(ZombieHorde const & src);
    ZombieHorde &operator=(ZombieHorde const & rhs);

    void         announce(void);
  private:

    Zombie      *_zombies;
    int         _N;
};

# endif
