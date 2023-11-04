/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:12:04 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/04 18:02:58 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;
    std::string input = "";

    if (ac != 2)
    {
        std::cout << "Invalid number of parameters" << std::endl;
        return (1);
    }
    else
    {
        input = av[1];
        harl.complain(input);
    }
    return (0);
}