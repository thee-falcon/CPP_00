/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:53:10 by omakran           #+#    #+#             */
/*   Updated: 2024/01/18 17:18:32 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}
void    Contact::setRankContact(int rank)
{
    this->_rankCountact = rank;
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
void    Contact::printContacts(int i) const
{
    if (!this->first_name.empty() || !this->last_name.empty() || !this->nick_name.empty())
    {
        std::cout << "|" << std::setw(10) << i << std::flush;
        std::cout << "|" << std::setw(10) << truncateText(this->first_name, 10) << std::flush;
        std::cout << "|" <<  std::setw(10) << truncateText(this->last_name, 10) << std::flush;
        std::cout << "|" << std::setw(10) << truncateText(this->nick_name, 10) << std::flush;
        std::cout << "|" << std::endl;
    }
}

std::string Contact::truncateText(const std::string& text, size_t max_length) const
{
    if (text.length() > max_length)
        return (text.substr(0, max_length - 1) + ".");
    else
        return (text);
}

void    Contact::showContat(int i) const
{
   if (!this->first_name.empty() || !this->last_name.empty() || !this->nick_name.empty())
    {
        std::cout << std::endl;
        std::cout << ">>>>>>>> Contac: " << i << " <<<<<<<<<" << std::endl;
        std::cout << "First Name:\t" << this->first_name << std::endl;
        std::cout << "Last Name:\t" << this->last_name << std::endl;
        std::cout << "Nickname:\t" << this->nick_name << std::endl;
        std::cout << "Phone Number:\t" << this->phone_number << std::endl;
        std::cout << "Darkest Secret:\t" << this->darkest_secret << std::endl;
        std::cout << std::endl;
    }
}