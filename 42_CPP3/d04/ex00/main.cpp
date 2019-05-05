/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:23:57 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/05/04 20:24:46 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
    Sorcerer    robert("Robert", "the Magnificent");
    Victim      jim("Jimmy");
    Peon        joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    return 0;
}
