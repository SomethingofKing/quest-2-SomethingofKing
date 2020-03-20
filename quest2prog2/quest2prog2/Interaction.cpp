#include <iostream>
#include "Account.h"
#include "Database.h"
#include "Interaction.h"
using namespace std;

void Interaction::menu() {
	Database database;
	int input = 0;
	int accountsSize = 0;
	int userAccount = 0;

	while (input == 0) {
		cout << "1. Create a new account\n";
		cout << "2. Log in\n";
		cout << "3. Terminate the program.\n";

		cin >> input;

		if (input == 1){
			Account tempAccount;
			int pin;
			cout << "Enter your desired PIN for this account.";
			cin >> pin;
			tempAccount.setPin(pin);
			tempAccount.id = accountsSize + 1;
			accountsSize += 1;
			cout << " Your account id is: " << tempAccount.id << endl;
			database.addAccount(tempAccount);
			input = 0;
		}

		if (input == 2) {
			int searchID;
			int searchPin;
			cout << "Please enter your account ID\n";
			cin >> searchID;
			if (database.findAccount(searchID) == true) {
				cout << "\nPlease enter your pin\n";
				cin >> searchPin;
				if (database.matchPin(searchID, searchPin)) {
					cout << "Thank you/n";
					input = 10;
					userAccount = searchID;
				}
			}else{
				cout << "Incorrect pin.\n";
				}
			}

		if (input == 3) {
			input = -1;
		}



		while (input = 10) {

			cout << "1. Logout\n";
			cout << "2. Display balance\n";
			cout << "3. Transfer money to another account\n";
			cout << "4. Terminate the program.\n";

			cin >> input;

			if (input == 1) {
				input = 0;
			}

			if (input == 2) {
				cout << "Your balance is: $";
				cout << database.accounts[userAccount].getBalance();
				input = 10;
			}
			
			if (input == 3) {
				int toAccountNum;
				cout << "Input the account number you'd like to transfer money to\n";
				cin >> toAccountNum;
				Transfer(userAccount, toAccountNum);
				input = 10;
			}

			if (input == 4) {
				input = -1;
			}
		}
	}

}

	
