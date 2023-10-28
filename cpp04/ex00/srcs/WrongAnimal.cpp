/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:38:21 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 16:59:52 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "(WrongAnimal) Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "(WrongAnimal) Destructor called" << std::endl;
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

void WrongAnimal::makeSound() const
{
    std::cout << "(WrongAnimal) " << this->type << " made a wrong sound" << std::endl;
}
