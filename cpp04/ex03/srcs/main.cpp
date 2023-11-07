/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:47:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/07 16:03:51 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

std::string RED = "\033[0;31m";
std::string GREEN = "\033[0;32m";
std::string WHITE = "\033[0;37m";
std::string CYAN = "\033[0;36m";
std::string YELLOW = "\033[0;33m";

int main()
{
    ICharacter *bob = new Character("Bob");
    ICharacter *tom = new Character("Tom");
    // Character tom = Character("Tom");
    tom->equip(new Ice());
    tom->equip(new Cure());
    tom->use(0, *bob);
    tom->use(2, *bob);
    tom->unequip(0);
    tom->use(0, *bob);
    tom->use(1, *bob);
    tom->equip(new Ice());

    delete tom;
    delete bob;
    return 0;
}
