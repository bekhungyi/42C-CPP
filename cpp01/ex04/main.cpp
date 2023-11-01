/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:46:18 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/01 18:10:40 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string ft_replace(std::string str, std::string target, std::string src)
{

    int x;
    int i = 0;
    // int i = str.find(target);
    while (i != std::string::npos)
    {
        i = str.find(target, x);
        if (i == std::string::npos)
            break;
        str = str.substr(0, i) + src + str.substr(i + target.length());
        x = str.length() - 1;
    }
    
    return (str);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (1);
    }
    std::string inFile = av[1];
    std::string outFile = inFile + ".replace";
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream file;
    std::ofstream newFile;
    file.open(inFile);
    if(!file.is_open())
    {
        std::cout << "File cannot be opened" << std::endl;
        return (1);
    }
    newFile.open(outFile);
    if(!newFile.is_open())
    {
        std::cout << "File cannot be created" << std::endl;
        return (1);
    }

    int i = 0;
    while (file)
    {
        if (file.eof())
            break;
        std::string line;
        getline(file, line);
        line = ft_replace(line, s1, s2);
        newFile << line << std::endl;
    }

    file.close();
    newFile.close();
    return (0);
}