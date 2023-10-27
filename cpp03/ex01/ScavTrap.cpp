/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:12:16 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/27 19:35:35 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
    *this = src;
}

ScavTrap    &ScavTrap::operator=(ScavTrap &src)
{
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->hitPoints == 0)
        std::cout << "ScavTrap " << this->name << " is already dead..." << std::endl;
    else if (this->energyPoints == 0)
        std::cout << "ScavTrap " << this->name << " has no energy left." << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
        this->energyPoints--;
    }
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}
