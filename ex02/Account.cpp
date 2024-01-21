/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:06:58 by omakran           #+#    #+#             */
/*   Updated: 2024/01/20 13:05:30 by omakran          ###   ########.fr       */
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
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << checkAmount() << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";closed" << std::endl;
}

void    Account::_displayTimestamp(void)
{
    // tm is a structure to represent a Calendar time
    std::tm fixedTime = {}; // Initialize with zeros to set a fixed date and time
    fixedTime.tm_year = 92; // 1992 (years since 1900)
    fixedTime.tm_mon = 0;  // January
    fixedTime.tm_mday = 4;
    fixedTime.tm_hour = 9;
    fixedTime.tm_min = 15;
    fixedTime.tm_sec = 32;

    // Format the timestamp as [YYYYMMDD_HHMMSS]
    char timestamp[20];
    // string format time
    std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", &fixedTime);
    // Display the timestamp
    std::cout << timestamp << " ";  
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "amount:" << checkAmount() << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << std::flush;
    _amount += deposit;
    std::cout << ";" << "deposit:" << deposit << ";" << "amount:" << checkAmount()
            << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawal:" << std::flush;
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";" << std::flush;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << "amount:" << _amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount(void) const
{
    return (_amount);
}