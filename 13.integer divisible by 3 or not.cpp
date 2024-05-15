#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::string result = (number % 3 == 0) ? "The number is divisible by 3." : "The number is not divisible by 3.";

    std::cout << result << std::endl;

    return 0;
}
