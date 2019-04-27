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

// #include "Colors.hpp"
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int 			main(int argc, char **argv)
{
	std::srand(std::time(nullptr));
	if (argc != 2)
	{
		std::cout << BPURPLE << "Please enter a number of Zombies to invade your city" << RESET << std::endl;
		return (0);
	}
	ZombieHorde zoms = ZombieHorde(atoi(argv[1]));
	ZombieHorde zoms2 = ZombieHorde(atoi(argv[1]));
	zoms.announce();
	std::cout << RED << "---------------" << RESET << std::endl;
	zoms2.announce();
	return (0);
}
