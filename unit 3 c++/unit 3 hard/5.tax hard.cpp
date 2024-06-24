#include <iostream>
#include <iomanip>
using namespace std;

class IncomeTaxCalculator {
private:
    double income;
    double tax;

public:
    void inputIncome() {
        cout << "Enter your Income: ";
        cin >> income;
    }
    void calculateTax() {
        if (income <= 60000) {
            tax = 0;
        } else if (income > 60000 && income <= 150000) {
            tax = income * 0.05;
        } else if (income > 150000 && income <= 500000) {
            tax = income * 0.1;
        } else {
            tax = income * 0.15;
        }
    }
    void displayTax() {
        cout << "Your income tax is: " << fixed << setprecision(2) << tax << endl;
    }
};

int main() {
    IncomeTaxCalculator employee;
    employee.inputIncome();

    employee.calculateTax();

    employee.displayTax();

    return 0;
}
