/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:53:33 by omakran           #+#    #+#             */
/*   Updated: 2024/01/16 20:10:18 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP 
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
    int         _rankCountact;
    std::string truncateText(const std::string& text, size_t max_length) const;
public:
    Contact(/* args */);
    ~Contact();
    void        initData();
    void        setRankContact(int rank);
    void        printContacts(int i) const;
    void        showContat(int i) const;
};

#endif