#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int gcd, remainder;

    gcd = (num1 < num2) ? num1 : num2;

    do {
        remainder = num1 % gcd;
        if (remainder == 0) {
            remainder = num2 % gcd;
        }
        num1 = gcd;
        gcd = remainder;
    } while (remainder != 0);

    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << num1 << std::endl;

    return 0;
}
