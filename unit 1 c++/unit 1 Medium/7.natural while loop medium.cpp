#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    int count = 0;
    cout << "Enter " << n << " numbers: ";
    while (count < n) {
        int num;
        cin >> num;
        sum += num;
        count++;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
