/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:20:47 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/30 17:21:51 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
    this->preSpell = "* heals ";
    this->postSpell = "'s wounds *";
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &src)
{
    *this = src;
}

Cure &Cure::operator=(const Cure &src)
{
    this->type = src.type;
    return (*this);
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    AMateria::use(target);
}
