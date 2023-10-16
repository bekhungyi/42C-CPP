/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:44:33 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/16 16:49:16 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

void    Contact::setfn(std::string fn)
{
    firstname = fn;
}

void    Contact::setln(std::string ln)
{
    lastname = ln;
}

void    Contact::setnn(std::string nn)
{
    nickname = nn;
}

void    Contact::setpn(std::string pn)
{
    phone = pn;
}

void    Contact::setss(std::string ss)
{
    secret = ss;
}

std::string    Contact::getfn(void)
{
    if (firstname.length() > 10)
        return (firstname.substr(0, 9) + ".");
    else    
        return firstname;
}

std::string    Contact::getln(void)
{
    if (lastname.length() > 10)
        return (lastname.substr(0, 9) + ".");
    else
        return lastname;
}

std::string    Contact::getnn(void)
{
    if (nickname.length() > 10)
        return (nickname.substr(0, 9) + ".");
    else
        return nickname;
}

std::string    Contact::getpn(void)
{
    return phone;
}

std::string    Contact::getss(void)
{
    return secret;
}