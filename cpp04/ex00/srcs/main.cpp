/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:47:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/07 15:40:15 by bhung-yi         ###   ########.fr       */
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
    {
        std::cout << std::endl << "----------- Test 1 -----------" << YELLOW << std::endl;
        Animal fox;
        fox.makeSound();
    }
    {
        std::cout << WHITE << std::endl << "----------- Test 2 -----------" << CYAN << std::endl;
        Cat cat;
        cat.makeSound();
    }
    {
        std::cout << WHITE << std::endl << "----------- Test 3 -----------" << GREEN << std::endl;
        Animal *tom = new Dog();
        tom->makeSound();
    }
    {
        std::cout << WHITE << std::endl << "----------- Test 4 -----------" << RED << std::endl;
        WrongAnimal *kat = new WrongCat();
        kat->makeSound();
    }
    // {
    //     const Animal* meta = new Animal();
    //     const Animal* j = new Dog();
    //     const Animal* i = new Cat();
    //     std::cout << j->getType() << " " << std::endl;
    //     std::cout << i->getType() << " " << std::endl;
    //     i->makeSound(); //will output the cat sound!
    //     j->makeSound();
    //     meta->makeSound();
    // }

    std::cout << WHITE << std::endl << "---------- Test End ----------" << std::endl;
    return 0;
}
