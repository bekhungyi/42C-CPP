/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:40:47 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/27 19:08:31 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << std::endl << "----- Test 1 -----" << std::endl;
    ClapTrap bob("Bob");
    bob.attack("enemy");
    bob.takeDamage(5);
    bob.beRepaired(5);

    std::cout << std::endl << "----- Test 2 -----" << std::endl;
    ClapTrap jon("Jon");
    jon.attack("enemy");
    jon.attack("enemy");
    jon.attack("enemy");
    jon.attack("enemy");
    jon.attack("enemy");
    jon.beRepaired(5);

    std::cout << std::endl << "----- Test 3 -----" << std::endl;
    ClapTrap tom("Tom");
    tom.takeDamage(50);
    tom.takeDamage(1);
    tom.beRepaired(50);

    return (0);
}