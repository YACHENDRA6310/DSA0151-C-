#include <iostream>
#include <cmath> 

void findSquareRoot(double number) {
    double result = sqrt(number);
    std::cout << "The square root of " << number << " is " << result << std::endl;
}

inline void increment(int &number) {
    number++;
}

inline void decrement(int &number) {
    number--;
}

int main() {
    double num;
    int value;

    std::cout << "Enter a number to find its square root: ";
    std::cin >> num;
    findSquareRoot(num);

    std::cout << "Enter a number to increment: ";
    std::cin >> value;
    increment(value);
    std::cout << "After increment: " << value << std::endl;

    std::cout << "Enter a number to decrement: ";
    std::cin >> value;
    decrement(value);
    std::cout << "After decrement: " << value << std::endl;

    return 0;
}
