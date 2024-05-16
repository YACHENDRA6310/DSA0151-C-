#include <iostream>

int main() {
    int numRows;

    std::cout << "Enter the number of rows for Pascal's Triangle: ";
    std::cin >> numRows;

    for (int i = 0; i < numRows; ++i) {
        int number = 1;
        for (int j = 0; j < numRows - i - 1; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j <= i; ++j) {
            std::cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        std::cout << std::endl;
    }

    return 0;
}
