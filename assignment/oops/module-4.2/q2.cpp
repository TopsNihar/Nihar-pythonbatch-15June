 #include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountnumber;
    string accountholder;
    int balance;

public:
    BankAccount(string accnum, string accholder, int initialbalance) {
        accountnumber = accnum;
        accountholder = accholder;
        balance = initialbalance;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "deposited: $" << amount << endl;
        } else {
            cout << "invalid deposit amount!" << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "insufficient funds!" << endl;
        } else {
            cout << "invalid withdrawal amount!" << endl;
        }
    }

    void checkbalance() {
        cout << "account balance: $" << balance << endl;
    }

    void displayaccountdetails() {
        cout << "account number: " << accountnumber << endl;
        cout << "account holder: " << accountholder << endl;
        checkbalance();
    }
};

int main() {
    BankAccount myAccount("123456789", "nihar nakrani", 1000.0);

    myAccount.displayaccountdetails();

    myAccount.deposit(500.0);

    myAccount.withdraw(200.0);

    myAccount.checkbalance();

    return 0;
}
