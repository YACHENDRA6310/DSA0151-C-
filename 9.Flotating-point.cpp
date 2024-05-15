#include <iostream>
#include <cmath>

int main() {
    double floatingNumber;

    std::cout << "Enter a floating-point number: ";
    std::cin >> floatingNumber;

    int roundedFloor = std::floor(floatingNumber);
    int roundedCeil = std::ceil(floatingNumber);

    std::cout << "Original Number: " << floatingNumber << std::endl;
    std::cout << "Rounded to Nearest Integer (Floor): " << roundedFloor << std::endl;
    std::cout << "Rounded to Nearest Integer (Ceil): " << roundedCeil << std::endl;

    return 0;
}
