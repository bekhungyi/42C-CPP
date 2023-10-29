/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:08:23 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/29 19:10:34 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain has been created" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain has been destroyed" << std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
}

Brain   &Brain::operator=(const Brain &src)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return(*this);
}

void    Brain::setIdea(int i,std::string idea)
{
    if (i >= 0 && i < 100)
        this->ideas[i] = idea;
    else
        return;
}

const std::string &Brain::getIdea(int i) const
{
    if (i >= 0 && i < 100)
        return(this->ideas[i]);
    else
        return (this->ideas[0]);
}
