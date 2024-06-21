#include <iostream>
using namespace std;

long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    cout << "Input the base: ";
    cin >> base;
    cout << "Input the exponent: ";
    cin >> exponent;
    
    long long result = power(base, exponent);
    
    cout << result << endl;
    
    return 0;
}
