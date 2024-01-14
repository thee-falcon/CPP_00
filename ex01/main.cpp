/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:12:14 by omakran           #+#    #+#             */
/*   Updated: 2024/01/14 19:55:58 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
  
int main(void)
{
    PhoneBook   book;
    std::string ci_user;

    book.printStyleWelcome();
    book.awesomeWelcome();
    while (true)
    {
        std::cout << "==> ";
        std::cin >> ci_user;
        if (ci_user == "EXIT")
            break ;
        else if (ci_user == "ADD")
            book.setContact();
        else if (ci_user == "SEARCH")
        {
            book.DisplayContacts();
            // book.search();   
        }
    }
    return (0);
}