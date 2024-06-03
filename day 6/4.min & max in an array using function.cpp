#include <iostream>
#include <limits>
using namespace std;

void findMinMax(const int arr[], int size, int& min, int& max) {
    min = numeric_limits<int>::max();
    max = numeric_limits<int>::min();
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int min, max;
    findMinMax(arr, n, min, max);

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}
