/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 23:27:59 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/03 23:28:01 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int 			main(void)
{
	srand (time(NULL));
	FragTrap  f1("Leo");
	FragTrap  f2;
	FragTrap  f3 = f2;
	f1.printStats();
	f2.printStats();
	f3.printStats();
	f2.meleeAttack("Leo");
	f3.rangedAttack("Leo");
	f1.takeDamage(20);
	f1.beRepaired(40);
	f1.beRepaired(40);
	f1.vaulthunter_dot_exe("FragTrap1");
	f2.takeDamage(150);
	f1.vaulthunter_dot_exe("FragTrap2");
	f3.takeDamage(150);
	std::cout << BRED << "Overview after battle: " << RESET << std::endl;
	f1.printStats();
	f2.printStats();
	f3.printStats();
	return (0);
}
