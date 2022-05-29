#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}


void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amout:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout << "[" ;
	std::cout << 1900 + ltm->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << ltm->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_sec;
	std::cout << "] " ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount;

	_displayTimestamp();
	p_amount = _amount;
	if	(_amount - withdrawal <= 0)
	{
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amout:" << p_amount << ";";
		std::cout << "withdrawal:" << "refused" << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amout:" << p_amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << ";" << std::endl;
		return(true);
	}
}

int	Account::getNbAccounts(void){return(_nbAccounts);}
int	Account::getNbDeposits(void){return(_totalNbDeposits);}
int	Account::getNbWithdrawals(void){return(_totalNbWithdrawals);}
int	Account::getTotalAmount(void){return(_totalAmount);}
int	Account::checkAmount(void) const{return(_amount > 0);}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}
