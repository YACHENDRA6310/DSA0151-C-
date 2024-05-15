#include <iostream>

int main() {
    int number, sum = 0, digit;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (number > 0) {
        digit = number % 10; 
        sum += digit; 
        number /= 10; 
    }

    std::cout << "Sum of all digits: " << sum << std::endl;

    return 0;
}
