#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;

    cout << "Original values:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    swapByValue(a, b);
    cout << "The value after swapping for call by value\n";
    cout << "a = " << a << "\n"; 
    cout << "b = " << b << "\n"; 
    swapByReference(a, b);
    cout << "The value after swapping for call by reference\n";
    cout << "a = " << a << "\n"; 
    cout << "b = " << b << "\n"; 

    return 0;
}
