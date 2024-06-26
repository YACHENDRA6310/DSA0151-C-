#include <iostream>
#include <string>
using namespace std;

class Customer {
public:
    string name;
    int accountNumber;
    string accountType;

    void setCustomerDetails() {
        cout << "Enter Customer Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Account Type: ";
        cin >> accountType;
    }

    void displayCustomerDetails() {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
    }
};
class Account {
public:
    float balance = 30; 

    void deposit() {
        float amount;
        cout << "Enter amount to Deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited Successfully" << endl;
    }

    void withdraw() {
        float amount;
        cout << "Balance: " << balance << endl;
        cout << "Enter amount to Withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Balance Amount After Withdraw: " << balance << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class Bank: public Customer, public Account {
public:
    void showMenu() {
        int choice;
        do {
            cout << "Choose Your Choice" << endl;
            cout << "1) Deposit" << endl;
            cout << "2) Withdraw" << endl;
            cout << "3) Display Balance" << endl;
            cout << "4) Display with full Details" << endl;
            cout << "5) Exit" << endl;
            cout << "Enter Your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    deposit();
                    break;
                case 2:
                    withdraw();
                    break;
                case 3:
                    displayBalance();
                    break;
                case 4:
                    displayCustomerDetails();
                    displayBalance();
                    break;
                case 5:
                    cout << "Thank You for Banking with us.." << endl;
                    break;
                default:
                    cout << "Invalid Choice. Please try again." << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    Bank bank;
    char accType;

    cout << "Enter S for saving customer and C for current a/c customer: ";
    cin >> accType;

    if (accType == 'S' || accType == 'C') {
        bank.setCustomerDetails();
        bank.showMenu();
    } else {
        cout << "Invalid Account Type" << endl;
    }

    return 0;
}
