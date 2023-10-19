/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:04:00 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/18 16:22:22 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// 1. Default constructor called
// 2. Copy constructor called
// 3. Copy assignment operator called <-- This line may be missing depending on your implementation
// 4. getRawBits member function called
// 5. Default constructor called
// 6. Copy assignment operator called
// 7. getRawBits member function called
// 8. getRawBits member function called 0
// 9. getRawBits member function called 0
// 10. getRawBits member function called 0
// Destructor called
// Destructor called
// Destructor called

int main(void)
{
    Fixed a; //1
    Fixed b(a); //2,3,4
    Fixed c; //5
    c = b; //6,7
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}