#include <iostream>
#include <iomanip>
using namespace std;

class TaxCalculator {
public:
    static double calculateTax(double income) {
        double tax = 0;

        if (income <= 60000) {
            tax = 0;
        } else if (income > 60000 && income <= 150000) {
            tax = income * 0.05;
        } else if (income > 150000 && income <= 500000) {
            tax = income * 0.1;
        } else {
            tax = income * 0.15;
        }

        return tax;
    }
};

int main() {
    double income;
    cout << "Enter your Income  : ";
    cin >> income;

    double tax = TaxCalculator::calculateTax(income);

    cout << fixed << setprecision(2);
    cout << "Your income tax is : " << tax << endl;

    return 0;
}
