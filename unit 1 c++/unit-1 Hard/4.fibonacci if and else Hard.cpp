#include <iostream>
using namespace std;

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
    cout << "Enter the value of N: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Invalid input. N should be non-negative.\n";
        return 1;
    }
    
    int result = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << "\n";
    
    return 0;
}
