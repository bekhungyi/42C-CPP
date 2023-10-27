/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:58:21 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 01:45:35 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->name = "default";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "(FragTrap) " << this->name << " is created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "(FragTrap) " << this->name << " joins FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "(FragTrap) " << this->name << " quits FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap &src)
{
    *this = src;
}

FragTrap	&FragTrap::operator=(FragTrap &src)
{
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

// void FragTrap::attack(const std::string& target)
// {
//     if (this->hitPoints == 0)
//         std::cout << "(FragTrap) " << this->name << " is already dead..." << std::endl;
//     else if (this->energyPoints == 0)
//         std::cout << "(FragTrap) " << this->name << " has no energy points to attack!" << std::endl;
//     else
//     {
//         std::cout << "(FragTrap) " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
//         this->energyPoints--;
//     }
// }

void FragTrap::highFivesGuys(void)
{
    if (this->hitPoints == 0)
        std::cout << "(FragTrap) " << this->name << " is already dead..." << std::endl;
    else if (this->energyPoints == 0)
        std::cout << "(FragTrap) " << this->name << " has no more energy for high fives!" << std::endl;
    else
    {
        std::cout << "(FragTrap) " << this->name << ": HIGH FIVE GUYS!" << std::endl;
        this->energyPoints--;
    }
}
