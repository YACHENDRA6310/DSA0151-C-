#include <iostream>
using namespace std;

int main() {
    const int size = 4;
    float numbers[size];
    float *p = numbers;

    cout << "Enter the 4 numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> *(p + i);
    }

    cout << "Displaying the data: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(p + i) << endl;
    }

    return 0;
}
