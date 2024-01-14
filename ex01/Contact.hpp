/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:53:33 by omakran           #+#    #+#             */
/*   Updated: 2024/01/14 19:37:09 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP 
#define CONTACT_HPP

#include <iostream>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
    int         _rankCountact;
public:
    Contact(/* args */);
    ~Contact();
    void    initData();
    void    setRankContact(int rank);
};

#endif