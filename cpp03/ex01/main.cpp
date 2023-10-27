/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:40:47 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/27 19:37:39 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::cout << std::endl << "----- Test 1 -----" << std::endl;
    ScavTrap bob("Bob");
    bob.attack("enemy");
    bob.takeDamage(50);
    bob.beRepaired(5);
    bob.takeDamage(100);
    bob.guardGate();

    return (0);
}