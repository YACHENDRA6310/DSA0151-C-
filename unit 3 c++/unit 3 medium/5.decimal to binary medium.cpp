#include <iostream>
using namespace std;

class DecimalToBinary {
public:
    DecimalToBinary(int decimal); 
    void displayBinary(); 

private:
    int binary; 
};
DecimalToBinary::DecimalToBinary(int decimal) {
    int remainder, factor = 1;
    binary = 0;

    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + remainder * factor;
        decimal = decimal / 2;
        factor = factor * 10;
    }
}
void DecimalToBinary::displayBinary() {
    cout << "Binary: " << binary << endl;
}
int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    DecimalToBinary obj(decimalNumber); 

    obj.displayBinary(); 

    return 0;
}
