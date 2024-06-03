#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temp;
    char choice;

    cout << "Enter 'C' to convert from Celsius to Fahrenheit or 'F' to convert from Fahrenheit to Celsius: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temp) << endl;
    } else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temp) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
