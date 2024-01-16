/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:48:08 by omakran           #+#    #+#             */
/*   Updated: 2024/01/16 19:01:22 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    Contact _n_contacts[8];
    int     n_contact;
    int _inputUserIndex(void)const;
public:
    PhoneBook();
    ~PhoneBook();
    //mutators or methods:
    void    printStyleWelcome(void);
    void    awesomeWelcome(void);
    void    setContact(void);
    void    displayContacts(void);
    void    searchOfContact(void)const;
};

#endif