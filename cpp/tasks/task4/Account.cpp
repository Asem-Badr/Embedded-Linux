#include "Account.h"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::m_noOfAccounts = 0;
int Account::m_totalAmount = 0;
int Account::m_totalNbDeposits = 0;
int Account::m_totalNbWithdrawals = 0;

Account::Account(void)
{
    // this is a private constructor so that no one will be able to call it.
}

Account::Account(int initial_deposit)
{
    m_noOfAccounts++;
    m_totalAmount += initial_deposit;
    m_totalNbDeposits++;
    m_amount = initial_deposit;
    m_noOfDeposits = 1;
    m_noOfWithdrawals = 0;
    m_accountIndex = m_noOfAccounts;
}

Account::~Account(void)
{
}

int Account::getNoOfAccounts(void)
{
    return m_noOfAccounts;
}

int Account::getTotalAmount(void)
{
    return m_totalAmount;
}

int Account::getNbDeposits(void)
{
    return m_totalNbDeposits;
}

int Account::getNoOfWithdrawals(void)
{
    return m_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    std::cout << "the number of accounts is : " << m_noOfAccounts << '\n'
              << "the total amount of deposits is : " << m_totalNbDeposits << '\n'
              << "the total amount of withdrawals is : " << m_totalNbWithdrawals << '\n'
              << "the total amount of all acounts is : " << m_totalAmount << '\n'
              << std::endl;
}

void Account::makeDeposit(int deposit)
{
    m_amount += deposit;
    m_noOfDeposits++;
    m_totalAmount += deposit;
    m_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal <= m_amount)
    {
        m_amount -= withdrawal;
        m_noOfWithdrawals++;
        m_totalAmount -= withdrawal;
        m_totalNbWithdrawals++;
        return true;
    }
    else
    {
        return false;
    }
}

int Account::checkAmount(void) const
{
    return m_amount;
}

void Account::displayStatus(void) const
{
    std::cout << "acount id : " << m_accountIndex << '\n'
              << "amount available : " << m_amount << std::endl;
}

void m_displayTimestamp(void)
{
    std::time_t currentTime = std::time(nullptr);
    std::cout << "Current time: " << std::asctime(std::localtime(&currentTime)) << std::endl;
}
