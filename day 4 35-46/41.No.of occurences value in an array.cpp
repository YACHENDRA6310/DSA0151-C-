#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE] = {1, 2, 2, 3, 4, 2, 5};
    int size = 7; 

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int value = 2; 

    int occurrences = countOccurrences(arr, size, value);

    cout << "Number of occurrences of " << value << " in the array: " << occurrences << endl;

    return 0;
}
