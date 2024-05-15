#include <iostream>

int main() {
    int num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Original numbers: " << num1 << " " << num2 << std::endl;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    std::cout << "Swapped numbers: " << num1 << " " << num2 << std::endl;

    return 0;
}
