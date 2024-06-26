#include <iostream>

using namespace std;

int main() {
    int arr[3] = {10, 20, 30}; 
    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    int* ptr = arr;
    cout << "\nDisplaying address using pointers: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "ptr + " << i << " = " << (ptr + i) << endl;
    }

    return 0;
}
