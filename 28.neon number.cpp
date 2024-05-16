#include <iostream>

bool isNeon(int n) {
    int square = n * n;
    int sum = 0;
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == n;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isNeon(number)) {
        std::cout << number << " is a Neon number." << std::endl;
    } else {
        std::cout << number << " is not a Neon number." << std::endl;
    }

    return 0;
}
