/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:34:56 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/30 16:31:06 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << this->name << " spawned." << std::endl;
}

Character::~Character()
{
    std::cout << this->name << " despawned." << std::endl;
}

Character::Character(const Character &src)
{
    std::cout << this->name<< " spawned." << std::endl;
    *this = src;
}

Character &Character::operator=(const Character &src)
{
    std::cout << this->name << " spawned." << std::endl;
    this->name = src.name;
    for (int i = 0; i < 4; i++)
    {
        if (src.inventory[i])
            this->inventory[i] = src.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
    return (*this);
}

Character::Character(std::string const & name)
{
    std::cout << name << " spawned." << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

std::string const & Character::getName() const
{
    return (this->name);
}

void    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            std::cout << this->name << " equipped " << this->inventory[i]->getType() << " to inventory " << i << std::endl;
            return ;
        }
    }
    std::cout << this->name << " inventory is full" << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    std::cout << this->name << " unequipped " << this->inventory[idx]->getType() << " from inventory " << idx << std::endl;
    this->inventory[idx] = nullptr;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (this->inventory[idx])
        this->inventory[idx]->use(target);
}
