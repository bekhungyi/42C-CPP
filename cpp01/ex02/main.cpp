/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:33:09 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/16 18:49:59 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
    return (0);
}