/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:54:15 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/11/01 18:14:06 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class   HumanB {
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon &weapon);
        ~HumanB();
        void    attack(void);
        void    setWeapon(Weapon &weapon);

};

#endif