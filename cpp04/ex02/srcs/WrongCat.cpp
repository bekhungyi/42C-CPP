/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:46:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 18:29:30 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "(WrongCat) Default constructor called" << std::endl;
    this->type = "WrongCat";
    this->brain = new Brain();
}

WrongCat::~WrongCat()
{
    std::cout << "(WrongCat) Destructor called" << std::endl;
    delete this->brain;
}

WrongCat::WrongCat(const WrongCat &src)
{
    std::cout << "(WrongCat) Copy constructor called" << std::endl;
    this->type = src.type;
    this->brain = src.brain;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "(WrongCat) Assignment operator called" << std::endl;
    this->type = src.type;
    this->brain = src.brain; // shallow copy
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << this->type << " says: Meow" << std::endl;
}
