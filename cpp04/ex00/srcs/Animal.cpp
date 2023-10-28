/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 03:02:10 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 16:33:40 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "(Animal) Default constructor called" << std::endl;
    this->type = "Ordinary animal";
}

Animal::~Animal()
{
    std::cout << "(Animal) " << this->type << " is destroyed" << std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << "(Animal) Copy constructor called" << std::endl;
    this->type = src.type;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "(Animal) Copy assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << this->type << " made an unknown sound..." << std::endl;
}
