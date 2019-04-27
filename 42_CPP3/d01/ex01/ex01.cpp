/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 23:03:20 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 23:03:21 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
  std::string* panthere = new std::string("String panthere");
  std::cout << *panthere << std::endl;
  delete(panthere);
}

int main(void)
{
  memoryLeak();
  while(1)
    ;
  return (0);
}
