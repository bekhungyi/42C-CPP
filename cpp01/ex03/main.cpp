/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:54:12 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/01 18:17:48 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        std::cout << std::endl << "------ Test 1 ------" << std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        std::cout << std::endl << "------ Test 2 ------" << std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanB bob("Bob");
        HumanB jim("Jim", club);
        bob.setWeapon(club);
        bob.attack();
        jim.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        std::cout << std::endl << "------ Test 3 ------" << std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
    }
    std::cout <<std::endl << "------ End ------" << std::endl;
    return 0;
}