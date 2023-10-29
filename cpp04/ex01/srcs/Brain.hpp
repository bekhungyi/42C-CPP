/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:08:31 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/29 19:05:26 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        ~Brain();
        Brain(const Brain &src);
        Brain   &operator=(const Brain &src);

        void    setIdea(int i, std::string idea);
        const std::string &getIdea(int i) const;

        std::string* getIdeasAddress() {
        return ideas;
        }
};

#endif
