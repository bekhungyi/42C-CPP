/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:38:16 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 16:59:33 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "(WrongCat) Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "(WrongCat) Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    std::cout << "(WrongCat) Copy constructor called" << std::endl;
    this->type = src.type;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << "(WrongCat) Copy assignment operator called" << std::endl;
    this->type = src.type;
    return (*this);
}

// void WrongCat::makeSound() const
// {
//     std::cout << "WrongCat made a wrong meow" << std::endl;
// }
