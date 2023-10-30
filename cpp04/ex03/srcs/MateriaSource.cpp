/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:12:35 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/30 17:21:01 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    *this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
        if (src.materia[i])
            this->materia[i] = src.materia[i]->clone();
        else
            this->materia[i] = NULL;
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *src)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->materia[i])
        {
            this->materia[i] = src->clone();
            return ;
        }
    }
}
        
AMateria *MateriaSource::createMateria(std::string const &)
{
    return (NULL);
}
