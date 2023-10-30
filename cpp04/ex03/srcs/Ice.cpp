/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:38:53 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/30 17:21:39 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    this->preSpell = "* shoots an ice bolt at ";
    this->postSpell = " *";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &src)
{
    *this = src;
}

Ice &Ice::operator=(const Ice &src)
{
    this->type = src.type;
    return (*this);
}

// Ice::Ice(std::string const & type)
// {
//     this->type = "ice";
// }

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    AMateria::use(target);
}
