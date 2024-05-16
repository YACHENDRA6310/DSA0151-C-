#include <iostream>

bool isAbundant(int n) {
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum > n;
}

int main() {
    int number;

    // Read the number from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is an Abundant number
    if (isAbundant(number)) {
        std::cout << number << " is an Abundant number." << std::endl;
    } else {
        std::cout << number << " is not an Abundant number." << std::endl;
    }

    return 0;
}
