#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is prime" << endl;
    } else {
        cout << number << " is not prime" << endl;
    }

    return 0;
}
