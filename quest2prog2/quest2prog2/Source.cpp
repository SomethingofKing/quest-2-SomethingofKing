#include <iostream>
#include <vector>

using namespace std;


class account {
public:
	int accountNumber;
	int pinNumber;
	float accountBalance;
	float pay_in(float);
	float pay_out(float);
};


class database {
public:
	database() {}
	vector<account> accounts;
};

//define database::find somewhere around here

float transfer(int fromAccountNum, int toAccountNum, int amount) {
	
	//take the code below but use database::find to find the accountNum instead of finding it in here
	
	for (int i = 0; i < /*sizeofvector*/; i++) {
		//if(vector at i has accountNum = fromAccountNum){
			//go through the loop again to find toAccountNum
			//subtract amount (which is cin'd from somewhere, either in this function or before it's called) from fromAccountNum's accountBalance value
			//then add it to toAccountNum's accountBalance value
			//else cout invalid receiving account number
		//else cout invalid sending account number
	}
}

class interaction {
	
};

float account::pay_in(float a) {
	cout << "Enter the amount you'd like to deposit: ";
	cin >> a;
	if (a > 0) {
		//use database::find
		//add a to account's accountBalance
	}
	else {
		return false;
	}
}

float account::pay_out(float a) {
	cout << "Enter the amount you'd like to withdraw: ";
	cin >> a;
	if (a > 0) {
		//use database::find
		//subtract a to account's accountBalance
	}
	else {
		return false;
	}
}


int main() {
	cout << "Enter an account number\n";
	int input;
	cin >> input;
	//call database::find

	system("pause");
	return 0;
}