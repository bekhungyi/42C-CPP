/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:04:00 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/17 18:09:55 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor called
// Copy constructor called
// Copy assignment operator called <-- This line may be missing depending on your implementation
// getRawBits member function called
// Default constructor called
// Copy assignment operator called
// getRawBits member function called
// getRawBits member function called 0
// getRawBits member function called 0
// getRawBits member function called 0
// Destructor called
// Destructor called
// Destructor called

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}