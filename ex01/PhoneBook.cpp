/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:22:09 by omakran           #+#    #+#             */
/*   Updated: 2024/01/23 16:26:08 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
    n_contact = 0;
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::printStyleWelcome()
{
    std::cout << std::endl;
    std::cout << "############################################################################" <<std::endl;
    std::cout << "#                                                                          #" << std::endl;
    std::cout << "#     🆆 🅴 🅻 🅲 🅾 🅼 🅴     🆃 🅾     < 🅾 🅼 🅰 🅺 🆁 🅰 🅽 >    🅿 🅷 🅾 🅽 🅴 🅱 🅾 🅾 🅺.    #" << std::endl;
    std::cout << "#                                                                          #" << std::endl;
    std::cout << "############################################################################" <<std::endl;
    std::cout << std::endl;
}

void    PhoneBook::awesomeWelcome()
{
    std::cout << std::endl;
    std::cout << "                          Please Enter your choice." << std::endl;
    std::cout << std::endl;
    std::cout << "=> ADD:  for add a contact." << std::endl;
    std::cout << "=> SEARCH:   to search for a contact." << std::endl;
    std::cout << "=> EXIT: to exit of my awesome phonebook." << std::endl;
}

void    PhoneBook::setContact()
{
    // this-> : is a Pointer, returns its own Address.
    this->_n_contacts[n_contact % 8].initData();
    this->_n_contacts[n_contact % 8].setRankContact(n_contact % 8);
    n_contact++;
}

void    PhoneBook::displayContacts()
{
    for (size_t i = 0; i < 8; i++)
    {   
        this->_n_contacts[i].printContacts(i);
    }
    std::cout << std::endl;
}

int PhoneBook::_inputUserIndex()const
{
    int     index = -1337;
    bool    check = false;
    do
    {
        std::cout << "Please Enter the Index for searching about the contact: " << std::flush;
        std::cin >> index;
        // It checks if the stream is in a good state, meaning that the last input operation was successful and there are no error flags set
        // cin.good(): that returns true if the stream is in a good state and false otherwise.
        if ((index >= 0 && index <= 8) && std::cin.good())
        {
            check = true ;
            if (index > this->n_contact - 1)
                std::cout << "Invalid Index!" << std::endl;
        }
        else
            {
                // called to clear the error flags. This allows the input stream to recover from an error state
                std::cin.clear();
                // to discard any remaining characters in the input buffer until a newline character 
                // and used as the count argument, which means it tries to ignore the maximum number of characters possible
                // numeric_limits is a template
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Please Enter a VALID INDEX, <from 1 TO 8>." << std::endl; 
            }
        
    } while (!check);
    return (index);
}

void    PhoneBook::searchOfContact()const
{
    int index = this->_inputUserIndex();
    this->_n_contacts[index].showContat(index);
}