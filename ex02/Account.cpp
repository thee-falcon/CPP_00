/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:06:58 by omakran           #+#    #+#             */
/*   Updated: 2024/01/19 16:34:23 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <vector>

int Account::_nbAccounts = 0;
// int Account::_amount = 0;
// int Account::_nbDeposits = 0;
// int Account::_nbWithdrawals  = 0;

Account::Account(int deposit)
{

    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = deposit;
    std::cout << "[19920104_091532] index:" << _accountIndex << ";" << "amount:" << _amount << ";created" << std::endl;
    _accountIndex++;
}

Account::~Account(void)
{
    
}

// void  Account::displayAccountsInfos(void)
// {
    
// }

// int Account::getNbAccounts(void)
// {
//     return (_nbAccounts);
// }

// int Account::getTotalAmount(void)
// {
//     return (_totalAmount);
// }

// int Account::getNbDeposits(void)
// {
//     return (_totalNbDeposits);
// }

// int Account::getNbWithdrawals(void)
// {
//     return (_totalNbWithdrawals);
// }

