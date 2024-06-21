#include <iostream>

int fibonacci(int n) {
    int a = 0, b = 1, c;
    
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    else {
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int n;
    std::cout << "Enter the value of N: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "Invalid input. N should be non-negative.\n";
    } else {
        int result = fibonacci(n);
        std::cout << "The " << n << "th Fibonacci number is: " << result << "\n";
    }
    
    return 0;
}
