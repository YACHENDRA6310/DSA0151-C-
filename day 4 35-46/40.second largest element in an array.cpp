#include <iostream>
#include <climits>
using namespace std;
int secondLargest(int arr[], int size) {
    int max = INT_MIN, secondMax = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}
int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE] = {1, 6, 3, 9, 5};
    int size = 5; 
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int secondLargestElement = secondLargest(arr, size);
    if (secondLargestElement == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "Second largest element: " << secondLargestElement << endl;
    }

    return 0;
}
