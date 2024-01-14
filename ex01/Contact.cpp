/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:53:10 by omakran           #+#    #+#             */
/*   Updated: 2024/01/13 23:54:35 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}

void    Contact::initData(void)
{
    std::cout << "> Please Enter Your First Name: ";
    std::cin >> this->first_name;
    std::cout << "> Please Enter Your Last Name: ";
    std::cin >> this->last_name;
    std::cout << "> Please Enter Your Nickname: ";
    std::cin >> this->nick_name;
    std::cout << "> Please Enter Your Number: ";
    std::cin >> this->phone_number;
    std::cout << "> Please Enter Your Darkest Secret: ";
    std::cin >> this->darkest_secret;
}