#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

using namespace std;

class Account
{
private:
	int pin;
	float balance;
public:
	double getBalance() {
		return balance;
	}
	Account();
	bool pay_in(float x);
	bool pay_out(float x);
	void setPin(int x);
	int getPin(int x);
	int id;
};

void Transfer(int a, int b);

#endif