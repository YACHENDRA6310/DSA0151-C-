#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}
