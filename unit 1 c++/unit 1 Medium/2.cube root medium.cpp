#include <iostream>
using namespace std;

int main() {
    int num1 = 27;
    int num2 = 64;
    double cbrt1, cbrt2;

    cbrt1 = (num1 == 27) ? 3 : -1;  
    cbrt2 = (num2 == 64) ? 4 : -1;  

    cout << "The cube root of " << num1 << " is " << cbrt1 << endl;
    cout << "The cube root of " << num2 << " is " << cbrt2 << endl;

    return 0;
}
