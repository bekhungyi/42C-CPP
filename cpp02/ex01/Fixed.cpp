/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:34:25 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/25 17:53:40 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPointValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int intNum)
{
    this->fixedPointValue = intNum << 8;
    std::cout << "INT constructor called" << std::endl;
}

Fixed::Fixed(const float floatNum)
{
    this->fixedPointValue = std::roundf(floatNum * (1 << 8));
    std::cout << "FLOAT constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->fixedPointValue = fixed.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}

// Fixed &Fixed::operator<<(const Fixed &fixed)
// {
//     this->fixedPointValue = fixed.getRawBits();
//     std::cout << "Copy assignment operator called" << std::endl;
//     return (*this);
// }

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointValue = raw;
}