/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 23:12:54 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/26 23:12:55 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int       main(void)
{
  Zombie  *z1 = new Zombie("Leo", "Cheesy");
	z1->announce();
	ZombieEvent apocalypse = ZombieEvent();

	apocalypse.setZombieType("Apos Zombie");
	Zombie 	*AposZ1 = apocalypse.newZombie("Leo");
	AposZ1->announce();

	ZombieEvent zomEvent;
	ZombieEvent zomEvent2;

	zomEvent.setZombieType("Crazy");
	zomEvent2.setZombieType("Even Crazier");

	Zombie *randomZom = zomEvent.randomChump();
	Zombie *randomZom2 = zomEvent2.randomChump();

	randomZom->announce();
	randomZom2->announce();

	delete(z1);
	delete(randomZom);
	delete(randomZom2);
  return (0);
}
