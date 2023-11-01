/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:33:09 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/01 18:47:17 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// void   ft_add(std::string *str)
// {
//     *str = *str + " abc";
//     std::cout << "addr: " << str << std::endl;
// }

// void   ft_add2(std::string &str)
// {
//     str = str + " abc";
//     std::cout << "addr: " << &str << std::endl;
// }

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "The memory address of..." << std::endl;
    std::cout << "stringVAR: " << &str << std::endl;
    std::cout << "stringPTR: " << strPTR << std::endl;
    std::cout << "stringREF: " << &strREF << std::endl;

    std::cout << "The value of..." << std::endl;
    std::cout << "stringVAR: " << str << std::endl;
    std::cout << "stringPTR: " << *strPTR << std::endl;
    std::cout << "stringREF: " << strREF << std::endl;

    // ft_add(strPTR);
    // ft_add2(str);
    // std::cout << str << std::endl;


    return (0);
}
