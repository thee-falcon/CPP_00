/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:12:14 by omakran           #+#    #+#             */
/*   Updated: 2024/01/21 21:16:18 by omakran          ###   ########.fr       */
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
        if (!(std::cin >> ci_user))
        {
            // Check if std::cin entered a fail state (e.g., EOF)
            if (std::cin.eof())
            {
                std::cout << "WARNING: EOF detected. Exiting the program." << std::endl;
                break ;
            }
            else
            {
                // Handle other stream errors
                std::cerr << "Error reading input. Exiting the program." << std::endl;
                break ;
            }
        }
        // Process user input
        if (ci_user == "EXIT")
            break;
        else if (ci_user == "ADD")
            book.setContact();
        else if (ci_user == "SEARCH")
        {
            book.displayContacts();
            book.searchOfContact();
        }
        std::cout << std::endl;
    }
    return (0);
}