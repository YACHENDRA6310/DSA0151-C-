#include <iostream>

int main() {
    int n, first = 0, second = 1, next;

    std::cout << "Enter the number of terms for Fibonacci series: ";
    std::cin >> n;

    std::cout << "Fibonacci series: " << first << " " << second << " ";

    for (int i = 2; i < n; ++i) {
        next = first + second;
        std::cout << next << " ";
        first = second;
        second = next;
    }

    return 0;
}
