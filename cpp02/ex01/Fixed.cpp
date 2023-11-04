/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:34:25 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/01 19:03:41 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointValue = 0;
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
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = intNum << this->fracBits;
}

Fixed::Fixed(const float floatNum)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = std::roundf(floatNum * (1 << this->fracBits));
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
