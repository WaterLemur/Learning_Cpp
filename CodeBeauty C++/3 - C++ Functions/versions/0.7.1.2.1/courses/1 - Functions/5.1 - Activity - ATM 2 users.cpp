#include "../1 - Functions.h"
#include <iostream>

using namespace std;


struct User {
private:
	double Balance = 500;

public:
	double getBalance() {
		return Balance;
	}
	void addBalance(double amount) {
		Balance += amount;
	}
};


void showMenu2() {
	cout << "**********MENU**********" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "************************" << endl;
}
void showUsers() {
	cout << "**********USERS**********" << endl;
	cout << "1. User 1" << endl;
	cout << "2. User 2" << endl;
	cout << "3. Exit" << endl;
	cout << "************************" << endl;
}
int showOtherMenu(string title) {
	int i = 0;
	do {
		cout << "**********" << title << "**********" << endl;
		cout << "1. User 1" << endl;
		cout << "2. User 2" << endl;
		cout << "3. Exit" << endl;
		cout << "************************" << endl;

	
		cin >> i;
		system("cls");
	} while (i != 1 && i != 2 && i != 3);
	return i;
}

void C1C51() {
	//check balance, deposit, withdraw, show menu
	User user1 = User();
	User user2 = User();
	int user;
	int option;

	double balance1 = 500;
	double balance2 = 500;
	do {
		showUsers();
		cout << "Select user: ";
		cin >> user;
		system("cls");
	} while (user != 3 && user != 1 && user != 2);


	do {
		showMenu2();
		cout << "Option: ";
		cin >> option;
		system("cls");

		int tmp = 0;
		switch (option) {
		case 1:
			switch (user) {
			case 1: cout << "Balance is: " << user1.getBalance() << " $" << endl; break;
			case 2: cout << "Balance is: " << user2.getBalance() << " $" << endl; break;
			}
			break;


		case 2:
			tmp = showOtherMenu("DEPOS");
			cout << "Deposit amount: ";
			double depositAmount;
			cin >> depositAmount;
			switch (tmp) {
			case 1: user1.addBalance(depositAmount);break;
			case 2: user2.addBalance(depositAmount);break;
			}
			break;


		case 3:
			tmp = showOtherMenu("WITHD");
			cout << "Withdraw amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;
			switch (tmp) {
			case 1:
				if (withdrawAmount <= user1.getBalance())
					user1.addBalance(-withdrawAmount);
				else
					cout << "Not enough money" << endl;
				break;
			case 2:
				if (withdrawAmount <= balance2)
					user1.addBalance(-withdrawAmount);
				else
					cout << "Not enough money" << endl;
				break;
			}
			break;
		}
	} while (option != 4);


	system("pause>0");
}