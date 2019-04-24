/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 03:09:14 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 03:09:16 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int 			main(void)
{
	Zombie  *z1 = new Zombie("Leo", "Type");
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
