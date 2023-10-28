/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:46:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 18:23:37 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "(Cat) Default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "(Cat) Destructor called" << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat &src)
{
    std::cout << "(Cat) Copy constructor called" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*(src.brain));
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "(Cat) Assignment operator called" << std::endl;
    this->type = src.type;
    this->brain = src.brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->type << " says: Meow" << std::endl;
}
