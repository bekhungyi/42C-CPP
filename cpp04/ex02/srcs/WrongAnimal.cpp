/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 03:02:10 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 18:29:28 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "(WrongAnimal) Default constructor called" << std::endl;
    this->type = "Ordinary WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "(WrongAnimal) " << this->type << " is destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "(WrongAnimal) Copy constructor called" << std::endl;
    this->type = src.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "(WrongAnimal) Copy assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << this->type << " made an unknown sound..." << std::endl;
}
