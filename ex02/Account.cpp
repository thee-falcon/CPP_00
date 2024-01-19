/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:06:58 by omakran           #+#    #+#             */
/*   Updated: 2024/01/19 19:23:26 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <vector>

int Account::_nbAccounts = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalAmount = 0;


Account::Account(int deposit)
{
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = deposit;
    _totalAmount += deposit;
    std::cout << "[19920104_091532] index:" << _accountIndex << ";" << "amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    std::cout << "[19920104_091532] index:" << _accountIndex << ";" << "amount:" << _amount << ";closed" << std::endl;
}

void  Account::displayAccountsInfos(void)
{
    std::cout << "[19920104_091532] accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits << ";" << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

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

