/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:47:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/29 19:13:29 by bhung-yi         ###   ########.fr       */
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

void testDeepCopy() {
    Cat originalCat;
    Cat copiedCat = originalCat;

    if (originalCat.compareBrainAddresses(copiedCat)) {
        std::cout << "Deep copy successful: Brain objects have different addresses." << std::endl;
    } else {
        std::cout << "Shallow copy detected: Brain objects have the same address." << std::endl;
    }
}

int main()
{
    {
    Animal  *zoo[4];

    // for (int i = 0; i < 10; i++) {
    //     zoo[i] = nullptr; // Initialize pointers to nullptr
    // }
    std::cout << WHITE << std::endl << "----------- Test 1 -----------" << YELLOW << std::endl;
    for (int i = 0; i < (4/2); i++)
        zoo[i] = new Cat();
    for (int i = (4/2); i < 4; i++)
        zoo[i] = new Dog();
    std::cout << "------------------------------" << std::endl;
    for (int i = 0; i < 4; i++)
        delete zoo[i];
    }
    {
    std::cout << WHITE << std::endl << "----------- Test 2 -----------" << CYAN << std::endl;
    Cat ori;
    ori.setBrain(0, ">> this is a random thought...");
    Cat copy (ori);
    std::cout << std::endl << ori.getBrain(0) << std::endl << std::endl;
    std::cout << "Ori Cat Addr. : " << &ori << std::endl;
    std::cout << "Ori Cat Brain Addr. : " << &(ori.getBrain(0)) << std::endl;
    std::cout << "Copy Cat Addr. : " << &copy << std::endl;
    std::cout << "Copy Cat Brain Addr.: " << &(copy.getBrain(0)) << std::endl << std::endl;
    }

    // std::cout << WHITE << std::endl << "----------- Test 3 -----------" << RED << std::endl;
    // std::cout << ori.getBrain(0) << std::endl;
    // WrongCat oricat;
    // WrongCat copycat(oricat);

    std::cout << WHITE << std::endl << "---------- Test End ----------" << std::endl;
    return 0;
}
