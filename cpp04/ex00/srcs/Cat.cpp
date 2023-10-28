/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:46:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 16:23:49 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "(Cat) Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "(Cat) Destructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
    std::cout << "(Cat) Copy constructor called" << std::endl;
    this->type = src.type;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "(Cat) Assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->type << " says: Meow" << std::endl;
}
