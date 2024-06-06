#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Transaction;
class Customer {
private:
    string name;
    string address;
    string phoneNumber;

public:
    
    Customer(const string& n, const string& addr, const string& phone) 
        : name(n), address(addr), phoneNumber(phone) {}
    friend void displayCustomerDetails(const Customer&);
    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }
};
void displayCustomerDetails(const Customer& customer) {
    cout << "Customer Name: " << customer.name << endl;
    cout << "Address: " << customer.address << endl;
    cout << "Phone Number: " << customer.phoneNumber << endl;
}
class Account {
private:
    int accountNumber;
    double balance;
    Customer customer;

public:
    Account(int accNum, double bal, const Customer& cust) 
        : accountNumber(accNum), balance(bal), customer(cust) {}
    friend void displayAccountDetails(const Account&);
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
        }
    }
    friend class Transaction;
};
void displayAccountDetails(const Account& account) {
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Customer Details:" << endl;
    displayCustomerDetails(account.customer);
    cout << "Balance: $" << account.balance << endl;
}
class Transaction {
public:
    static void transfer(Account& from, Account& to, double amount) {
        if (amount <= 0) {
            cout << "Invalid amount for transfer." << endl;
            return;
        }

        if (amount > from.balance) {
            cout << "Insufficient balance in the sender's account. Transfer failed." << endl;
            return;
        }

        from.balance -= amount;
        to.balance += amount;
        cout << "Transfer of $" << amount << " from account " << from.accountNumber 
             << " to account " << to.accountNumber << " successful." << endl;
    }
};

int main() {
    Customer customer1("John Doe", "123 Main St", "123-456-7890");
    Customer customer2("Jane Smith", "456 Elm St", "456-789-0123");
    Account account1(1001, 5000, customer1);
    Account account2(1002, 3000, customer2);
    cout << "Account 1 Details:" << endl;
    displayAccountDetails(account1);
    cout << endl;
    cout << "Account 2 Details:" << endl;
    displayAccountDetails(account2);
    cout << endl;
    account1.deposit(1000);
    account2.withdraw(500);
    Transaction::transfer(account1, account2, 1500);
    cout << endl;
    cout << "Updated Account 1 Details:" << endl;
    displayAccountDetails(account1);
    cout << endl;
    cout << "Updated Account 2 Details:" << endl;
    displayAccountDetails(account2);

    return 0;
}
