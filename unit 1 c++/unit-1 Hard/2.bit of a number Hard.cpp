#include <iostream>
using namespace std;

int main() {
    int number, n;
    
    cout << "Enter Number: ";
    cin >> number;
    
    cout << "Enter bit number you wish to set (0-based indexing): ";
    cin >> n;
    if (n < 0 || n > 31) {
        cout << "Invalid bit position. Please enter a number between 0 and 31.\n";
        return 1; 
    }
    int result = number | (1 << n);
    
    cout << "Bit set Successfully\n";
    cout << "Answer: " << result << endl;
    
    return 0;
}
