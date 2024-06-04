#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
public:
    BankAccount(string name, int number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
        cout << "BankAccount for " << accountHolderName << " created with balance " << balance << endl;
    }
    ~BankAccount() {
        cout << "BankAccount for " << accountHolderName << " with balance " << balance << " is being closed." << endl;
    }   
    void displayAccountInfo() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main() {
    BankAccount account("John Doe", 123456, 1000.50);
    account.displayAccountInfo();
    return 0;
}
