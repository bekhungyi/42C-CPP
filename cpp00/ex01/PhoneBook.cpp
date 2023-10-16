/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:44:39 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/16 17:08:00 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>

void    PhoneBook::add(int  i)
{
    std::string input = "";
    std::cout << "Create new contact" << std::endl;
    std::cout << "First Name: ";
    std::cin >> input;
    contact[i].setfn(input);
    std::cout << "Last Name: ";
    std::cin >> input;
    contact[i].setln(input);
    std::cout << "Nickname: ";
    std::cin >> input;
    contact[i].setnn(input);
    std::cout << "Phone Number: ";
    std::cin >> input;
    contact[i].setpn(input);
    std::cout << "Darkest Secret: ";
    std::cin >> input;
    contact[i].setss(input);


    std::cout << "Contact " + std::to_string(i+1) + " created." << std::endl;
}

void    PhoneBook::print(void)
{
    std::cout << "     index|first name| last name|  nickname|" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        int n = i + 1;
        std::cout << std::setw(10) << n << "|";
        std::cout << std::setw(10) << contact[i].getfn() << "|";
        std::cout << std::setw(10) << contact[i].getln() << "|";
        std::cout << std::setw(10) << contact[i].getnn() << "|" << std::endl;
    }
}

void    PhoneBook::search(void)
{
    int i = 0;
    std::string input = "";
    std::cout << "Enter index: ";
    std::cin >> input;
    if (input >= "1" && input <= "8")
    {
        i = stoi(input) - 1;
        std::cout << "First Name: " << contact[i].getfn() << std::endl;
        std::cout << "Last Name: " << contact[i].getln() << std::endl;
        std::cout << "Nickname: " << contact[i].getnn() << std::endl;
        std::cout << "Phone Number: " << contact[i].getpn() << std::endl;
        std::cout << "Darkest Secret: " << contact[i].getss() << std::endl;
    }
    else
    {
        std::cout << "Invalid index" << std::endl;
        PhoneBook::search();
    }
}