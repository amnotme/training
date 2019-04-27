/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 21:41:44 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 21:41:46 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

# define CYAN "\033[0;36m"
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"
# define RESET "\033[0m"

# include <iostream>
# include <string>

class Pony
{
  public:
    Pony(void);
    ~Pony(void);


  std::string     getName(void) const;
  void            setName(std::string name);
  private:

  std::string     _name;
};
Pony    *ponyOnTheHeap(void);
Pony    ponyOnTheStack(void);

# endif
