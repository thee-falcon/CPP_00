/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:22:09 by omakran           #+#    #+#             */
/*   Updated: 2024/01/12 15:12:36 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::PrintStyleWelcome()
{
    std::cout << "############################################################################" <<std::endl;
    std::cout << "#                                                                          #" << std::endl;
    std::cout << "#     🆆 🅴 🅻 🅲 🅾 🅼 🅴     🆃 🅾     < 🅾 🅼 🅰 🅺 🆁 🅰 🅽 >    🅿 🅷 🅾 🅽 🅴 🅱 🅾 🅾 🅺.    #" << std::endl;
    std::cout << "#                                                                          #" << std::endl;   
    std::cout << "############################################################################" <<std::endl; 
}

void    PhoneBook::awesome_welcome()
{
    std::cout << std::endl;
    std::cout << "Please Enter your choice." << std::endl;
    std::cout << std::endl;
    std::cout << "=> ADD:  for add a contact." << std::endl;
    std::cout << "=> SEARCH:   to search for a contact." << std::endl;
    std::cout << "=> EXIT: to exit of my awesome phonebook." << std::endl;
}