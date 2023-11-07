/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:43:37 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/28 18:17:53 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class WrongCat : public Animal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat &operator=(const WrongCat &rhs);
        void makeSound() const;
        void    setBrain(int i, std::string idea);
        const std::string &getBrain(int i) const;

        bool compareBrainAddresses(const WrongCat& other) const {
        return (this->brain->getIdeasAddress() != other.brain->getIdeasAddress());
        }
    
    private:
        Brain *brain;
};

#endif
