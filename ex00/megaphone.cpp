/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:11:07 by omakran           #+#    #+#             */
/*   Updated: 2024/01/11 21:37:18 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    char    *word;

    if (argc != 1)
    {
        for (int i = 1; i < argc; i++)
        {
            word = argv[i];
            for (int j = 0; word[j] != '\0'; j++)
                std::cout << static_cast<char>(toupper(word[j]));
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}