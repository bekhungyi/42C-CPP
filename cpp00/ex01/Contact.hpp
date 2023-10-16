/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:44:09 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/16 16:34:02 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
    private:
        int    i;
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone;
        std::string secret;
    public:
        void    setfn(std::string fn);
        void    setln(std::string ln);
        void    setnn(std::string nn);
        void    setpn(std::string pn);
        void    setss(std::string ss);

        std::string    getfn(void);
        std::string    getln(void);
        std::string    getnn(void);
        std::string    getpn(void);
        std::string    getss(void);
};


#endif
