/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:47:12 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/29 19:17:55 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "(Dog) Default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "(Dog) Destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog &src)
{
    std::cout << "(Dog) Copy constructor called" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*(src.brain));
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "(Dog) Assignment operator called" << std::endl;
    this->type = src.type;
    this->brain = src.brain;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->type << " says: Woof" << std::endl;
}
