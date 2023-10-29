/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:47:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/29 19:24:54 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

std::string RED = "\033[0;31m";
std::string GREEN = "\033[0;32m";
std::string WHITE = "\033[0;37m";
std::string CYAN = "\033[0;36m";
std::string YELLOW = "\033[0;33m";

int main()
{
    {
        std::cout << WHITE << std::endl << "----------- Test 1 -----------" << YELLOW << std::endl;
        Cat tom;
        Dog bob;
        tom.makeSound();
        bob.makeSound();
    }
    {
        // std::cout << WHITE << std::endl << "----------- Test 2 -----------" << YELLOW << std::endl;
        // WrongCat jerry;
        // jerry.makeSound();
    }

    std::cout << WHITE << std::endl << "---------- Test End ----------" << std::endl;
    return 0;
}
