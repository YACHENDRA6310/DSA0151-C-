#include <iostream>
using namespace std;
double calculateInterest(double principal, double rate, int years) {
    return (principal * rate * years) / 100.0;
}
int main() {
    double principal;
    int years;
    char seniorCitizen;
    const double seniorRate = 12.0;
    const double regularRate = 10.0;
    cout << "Enter the principal amount: ";
    cin >> principal;  
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is customer senior citizen (y/n): ";
    cin >> seniorCitizen;  
    double interest;
    if (seniorCitizen == 'y' || seniorCitizen == 'Y') {
        interest = calculateInterest(principal, seniorRate, years);
    } else {
        interest = calculateInterest(principal, regularRate, years);
    }
    cout << "Interest: " << interest << endl;
    
    return 0;
}
