/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:11:06 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/01 18:50:57 by bhung-yi         ###   ########.fr       */
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

    // delete[] zombie;
        
    return (zombie);
}