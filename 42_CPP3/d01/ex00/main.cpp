/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 21:41:57 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 21:42:04 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

int     main(void)
{
  Pony *heap = ponyOnTheHeap();
  Pony stack = ponyOnTheStack();

  heap->setName("Heap");
  stack.setName("Stack");

  std::cout << "I'm a pony on the " << heap->getName() << std::endl;
  std::cout << "I'm a pony on the " << stack.getName() << std::endl;

  delete(heap);

  return (0);
}
