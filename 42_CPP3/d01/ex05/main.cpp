/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 03:50:21 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 03:50:22 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int   main(void)
{
  // Brain b;
  //
  // // b.setThought("what");
  // std::cout << b.getThought() << std::endl;
  // std::cout << b.identify() << std::endl;
Human bob;
std::cout << bob.identify() << std::endl;
std::cout << bob.getBrain().identify() << std::endl;

  return (0);
}
