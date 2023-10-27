/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:47:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 03:50:33 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

// std::string RED = "\033[0;31m";
// std::string GREEN = "\033[0;32m";
// std::string WHITE = "\033[0;37m";

int main()
{
    if (woof() == 1)
        std::cout << "woof" << std::endl;
    else
        std::cout << "meow" << std::endl;

    std::cout << "------------------" << std::endl;
}
