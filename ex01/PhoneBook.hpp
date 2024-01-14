/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:48:08 by omakran           #+#    #+#             */
/*   Updated: 2024/01/13 20:11:51 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    Contact _n_contacts[8];
public:
    PhoneBook();
    ~PhoneBook();
    //mutators or methods:
    void    printStyleWelcome(void);
    void    awesomeWelcome(void);
    void    setContact(void);
};

#endif