#include <iostream>

int main() {
    double num1, num2;

    // Read in two floating-point numbers
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> num1 >> num2;

    // Perform addition
    std::cout << "Addition: " << num1 + num2 << std::endl;

    // Perform subtraction
    std::cout << "Subtraction: " << num1 - num2 << std::endl;

    // Perform multiplication
    std::cout << "Multiplication: " << num1 * num2 << std::endl;

    // Perform division
    if (num2 != 0) {
        std::cout << "Division: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Division by zero is undefined." << std::endl;
    }

    // Perform modulo
    // Modulo operation is not defined for floating-point numbers in C++,
    // we can use fmod() function from <cmath> header to perform modulo.
    // But, keep in mind that the result might not be accurate due to
    // floating-point precision issues.
    std::cout << "Modulo: " << fmod(num1, num2) << std::endl;

    return 0;
}
