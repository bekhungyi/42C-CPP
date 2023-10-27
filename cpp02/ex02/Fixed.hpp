/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:34:41 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/27 18:31:28 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixedPointValue;
    static const int fracBits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int intNum);
    Fixed(const float floatNum);
    Fixed &operator=(const Fixed &fixed);

    bool operator<(Fixed num) const;
    bool operator>(Fixed num) const;
    bool operator<=(Fixed num) const;
    bool operator>=(Fixed num) const;
    bool operator!=(Fixed num) const;

    Fixed operator+(Fixed num) const;
    Fixed operator-(Fixed num) const;
    Fixed operator*(Fixed num) const;
    Fixed operator/(Fixed num) const;

    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed min(Fixed &num1, Fixed &num2);
    static Fixed max(Fixed &num1, Fixed &num2);
    static Fixed min(const Fixed &num1, const Fixed &num2);
    static Fixed max(const Fixed &num1, const Fixed &num2);

    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixedNum);

#endif