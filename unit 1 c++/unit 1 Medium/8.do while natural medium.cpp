#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int sum = 0;
    int i = 1;
    int number;

    cout << "Enter the numbers : ";
    do {
        cin >> number;
        sum += number;
        i++;
    } while (i <= n);

    cout << "Sum: " << sum << endl;

    return 0;
}
