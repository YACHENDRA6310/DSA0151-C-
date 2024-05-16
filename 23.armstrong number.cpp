#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the range (start and end numbers): ";
    cin >> start >> end;

    cout << "Armstrong numbers in the range " << start << " to " << end << " are: " << endl;
    for (int num = start; num <= end; num++) {
        int sum = 0;
        int temp = num;
        int numDigits = log10(num) + 1;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}
