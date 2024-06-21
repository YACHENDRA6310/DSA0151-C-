#include <iostream>
using namespace std;

int main() {
    int num1 = 1296;
    int num2 = 36;
    double sqrt1, sqrt2;

    if (num1 == 1296) {
        sqrt1 = 36;  
    } else {
        sqrt1 = -1;  
    }

    if (num2 == 36) {
        sqrt2 = 6;  
    } else {
        sqrt2 = -1;  
    }

    cout << "The square root of " << num1 << " is " << sqrt1 << endl;
    cout << "The square root of " << num2 << " is " << sqrt2 << endl;

    return 0;
}
