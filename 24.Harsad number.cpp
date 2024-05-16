#include <iostream>

int main() {
    int number, originalNumber, sum = 0, digit;

    std::cout << "Enter a number: ";
    std::cin >> number;

    originalNumber = number;

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    if (originalNumber % sum == 0) {
        std::cout << originalNumber << " is a Harshad number." << std::endl;
    } else {
        std::cout << originalNumber << " is not a Harshad number." << std::endl;
    }

    return 0;
}
