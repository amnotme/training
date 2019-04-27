/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 03:29:24 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 03:29:31 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define RESET "\033[0m"
int     main(void)
{
  std::string brain = "HI THIS IS BRAIN";
  std::string *brainPtr = &brain;
  std::string &brainRef = brain;

  std::cout << "this is the original brain: " << GREEN << brain << RESET << std::endl;
  std::cout << "this is the pointer to brain: " << YELLOW << *brainPtr << RESET <<  std::endl;
  std::cout << "this is the reference to brain: " << BLUE << brainRef << RESET <<  std::endl;

  return (0);
}
