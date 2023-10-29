/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:43:37 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/29 19:09:57 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &rhs);
        void makeSound() const;

        void    setBrain(int i, std::string idea);
        const std::string &getBrain(int i) const;


        bool compareBrainAddresses(const Cat& other) const {
        return (this->brain->getIdeasAddress() != other.brain->getIdeasAddress());
        }
    
    private:
        Brain *brain;
};

#endif
