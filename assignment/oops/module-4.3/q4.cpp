#include <iostream>
using namespace std;

class BankAccount {
private:
    int account_number;
    int balance;

public:
    BankAccount(int accNum, int initial_balance) {
        account_number = accNum;
        balance = initial_balance;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "deposited $" << amount << ". new balance: $" << balance << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "withdrew $" << amount << ". new balance: $" << balance << endl;
            } else {
                cout << "insufficient funds." << endl;
            }
        } else {
            cout << "withdrawal amount must be positive." << endl;
        }
    }

    void display_account() {
        cout << "account number: " << account_number << endl;
        cout << "balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount(123456, 500.00);
    
    myAccount.display_account();

    myAccount.deposit(150.00);
    myAccount.withdraw(100.00);
    myAccount.withdraw(600.00); 
    
    myAccount.display_account();

    return 0;
}
