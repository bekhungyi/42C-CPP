/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:32:46 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/30 17:09:12 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "default";
    this->preSpell = "* no spell *";
    this->postSpell = "";
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
    this->type = src.type;
    return (*this);
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << this->preSpell << target.getName() << this->postSpell << std::endl;
}
