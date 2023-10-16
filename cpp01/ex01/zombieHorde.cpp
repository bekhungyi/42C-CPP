/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:11:06 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/16 18:30:43 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    std::string zName = "";

    Zombie *zombie = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        zName = name + std::to_string(i);
        zombie[i].setN(zName);
    }
    
    // for (int i = 0; i < n; i++)
    //     zombie[i].announce();

    zombie[0].announce();
    zombie[1].announce();
    zombie[2].announce();
    zombie[3].announce();
    zombie[4].announce();
    // zombie[5].announce();

    delete[] zombie;
        
    return (zombie);
}