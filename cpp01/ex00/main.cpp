/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:16:17 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/16 18:04:21 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "------------------------------------------" << std::endl;
    Zombie zombie("ori");
    zombie.announce();

    std::cout << "------------------------------------------" << std::endl;
    Zombie *zombie1;
    std::cout << "newZombie:" << std::endl;
    zombie1 = newZombie("new");
    zombie1->announce();
    delete zombie1;
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "randomChump:" << std::endl;
    randomChump("Rand");
    
    std::cout << "------------------------------------------" << std::endl;
    return (0);
}