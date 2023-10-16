/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:44:20 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/16 17:08:23 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
    PhoneBook   book;
    int         i = 0;
    std::string input = "";
    std::cout << "Program started..." << std::endl;
    while (input != "EXIT")
    {
        if (input == "ADD")
            book.add(i++);
        else if (input == "SEARCH")
        {
            book.print();
            book.search();
        }
        std::cout << "> ";
        std::cin >> input;
        if (i == 8)
            i = 0;
    }
    
    return 0;
}