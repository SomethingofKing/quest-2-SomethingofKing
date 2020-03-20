#include "Database.h"
bool Database::findAccount(int x) {
	for(int i = 0; i < accounts.size(); i++) {
		if (x == accounts[i].id) {
			return true;
		}
	}

}


void Database::addAccount(Account const& x) {
	accounts.push_back(x);
}

bool Database::matchPin(int x, int y) {
	for (int i = 0; i < accounts.size(); i++) {
		if (x == accounts[i].id) {
			if (y == accounts[i].getPin(i)) {
				return true;
			}else{	
				return false;
			}
		}else{
			return false;
		}
	}
}