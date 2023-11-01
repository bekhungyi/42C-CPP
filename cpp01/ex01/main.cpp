/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:16:17 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/01 18:51:09 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    {
        std::cout << "------------------------------------------" << std::endl;
        Zombie zombie;
        zombie.setN("oriZombie");
        zombie.announce();
    }
    {
        std::cout << "------------------------------------------" << std::endl;
        Zombie *zombi;
        zombi = zombieHorde(5, "zombi");
        for(int i = 0; i < 5; i++)
            zombi[i].announce();
        delete[] zombi;
    }
    std::cout << "------------------------------------------" << std::endl;
    return (0);
}