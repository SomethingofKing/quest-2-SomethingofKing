#include "Account.h"
#include "Database.h"
#include <iostream>

using namespace std;

Account::Account() {
	balance = 1.00; //Needs to have a starting amount
	pin = 0;
	id = 0;

}

int Account::getPin(int x) {
	pin = x;
	return x;
}

void Account::setPin(int input) {
	input = pin;
}

bool Account::pay_in(float x) {
	float depositAmount;

	depositAmount = x;

	if (depositAmount > 0) {
		balance += depositAmount;
		//cout << "Your current balance is now " << balance << endl;
		return true;
	}
	else {
		return false;
	}
}

bool Account::pay_out(float input) {
	float withdrawAmount;

	withdrawAmount = input;

	if (withdrawAmount > 0 && balance >= withdrawAmount) {
		balance -= withdrawAmount;
		//cout << "Withdraw successful, your current balance is: " << balance << endl;
		return true;
	}

	else {
		return false;
	}
}

void Transfer(int a, int b) {
	Database database;
	float amount;
	cout << "How much would you like to transfer?\n";
	cin >> amount;
	if (amount > 0) {
			database.accounts[a].pay_out(amount); 
			database.accounts[b].pay_in(amount);
	}else{	
		cout << "\nPlease enter an amount greater than 0.\n";
	}
}