#include <iostream>

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int n) {
    int sum = 0;
    int originalNumber = n;
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    return sum == originalNumber;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isStrong(number)) {
        std::cout << number << " is a Strong number." << std::endl;
    } else {
        std::cout << number << " is not a Strong number." << std::endl;
    }

    return 0;
}
