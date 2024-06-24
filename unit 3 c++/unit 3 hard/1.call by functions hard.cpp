#include <iostream>
using namespace std;
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapByValue(a, b);
    cout << "The value after swapping for call by value:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapByReference(a, b);
    cout << "The value after swapping for call by reference:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
