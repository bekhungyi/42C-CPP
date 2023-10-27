/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:40:41 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 01:48:17 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "(ClapTrap) " << this->name << " spawned" << std::endl;
}

ClapTrap::ClapTrap(std::string &name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "(ClapTrap) " << this->name << " spawned" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "(ClapTrap) " << this->name << " despawned" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
    *this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &src)
{
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead..." << std::endl;
        return ;
    }
    else if (this->energyPoints == 0)
    {
        std::cout << this->name << " has no energy points to attack!" << std::endl;
        return ;
    }
    else
        this->energyPoints--;
    
    std::cout << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead..." << std::endl;
        return ;
    }
    else if (this->hitPoints <= amount)
    {
        this->hitPoints = 0;
        std::cout << this->name << " took " << amount << " points of damage and died!" << std::endl;
        return ;
    }
    else
        this->hitPoints -= amount;
    std::cout << this->name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead..." << std::endl;
        return ;
    }
    else if (this->energyPoints == 0)
    {
        std::cout << this->name << " has no energy points to repair!" << std::endl;
        return ;
    }
    else if (this->hitPoints == 10)
    {
        std::cout << this->name << " is already at full health!" << std::endl;
        return ;
    }
    else if (this->hitPoints + amount > 10)
        this->hitPoints = 10;
    else
        this->hitPoints += amount;
    std::cout << this->name << " repaired itself and got " << amount << " hit points back!" << std::endl;
    this->energyPoints--;
}