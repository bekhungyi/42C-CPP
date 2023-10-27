/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:34:25 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/27 16:21:18 by bhung-yi         ###   ########.fr       */
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
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int intNum)
{
    this->fixedPointValue = intNum << this->fracBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNum)
{
    this->fixedPointValue = std::roundf(floatNum * (1 << this->fracBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointValue = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
    float num;
    num = static_cast<float>(this->fixedPointValue) / (1 << 8);

    return (num);
}

int Fixed::toInt( void ) const
{
    int num;
    num = (this->fixedPointValue / (1 << 8));

    return (num);
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixedNum)
{
    str << fixedNum.toFloat();
	return (str);
}