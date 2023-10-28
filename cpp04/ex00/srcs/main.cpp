/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:47:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 16:55:09 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

std::string RED = "\033[0;31m";
std::string GREEN = "\033[0;32m";
std::string WHITE = "\033[0;37m";
std::string CYAN = "\033[0;36m";
std::string YELLOW = "\033[0;33m";

int main()
{
    std::cout << std::endl << "----------- Test 1 -----------" << YELLOW << std::endl;
    Animal fox;
    fox.makeSound();

    std::cout << WHITE << std::endl << "----------- Test 2 -----------" << CYAN << std::endl;
    Cat cat;
    cat.makeSound();

    std::cout << WHITE << std::endl << "----------- Test 3 -----------" << GREEN << std::endl;
    Dog jerry;
    jerry.makeSound();
    Dog tom(jerry);
    tom.makeSound();

    std::cout << WHITE << std::endl << "----------- Test 4 -----------" << RED << std::endl;
    WrongCat kat;
    kat.makeSound();

    std::cout << WHITE << std::endl << "---------- Test End ----------" << std::endl;
    return 0;
}
