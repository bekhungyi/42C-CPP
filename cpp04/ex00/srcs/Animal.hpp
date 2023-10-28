/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 03:02:18 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 16:33:24 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        ~Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);
        std::string    getType() const;

        virtual void makeSound() const;
        
    protected:
        std::string type;
};

#endif
