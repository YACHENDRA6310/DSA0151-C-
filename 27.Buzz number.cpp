#include <iostream>

bool isBuzz(int n) {
    return (n % 7 == 0 || n % 10 == 7);
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isBuzz(number)) {
        std::cout << number << " is a Buzz number." << std::endl;
    } else {
        std::cout << number << " is not a Buzz number." << std::endl;
    }

    return 0;
}
