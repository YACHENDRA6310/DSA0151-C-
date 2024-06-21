#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += num;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
