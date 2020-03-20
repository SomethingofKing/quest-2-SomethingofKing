#pragma once
#include "Account.h"
#include "Interaction.h"
#include <vector>
#ifndef DATABASE_H
#define DATABASE_H
class Database
{
public:
	vector<Account> accounts;
	Database() {}
	bool findAccount(int accounNum);
	void addAccount(Account const& x);
	bool matchPin(int accountNum, int pin);
};
#endif