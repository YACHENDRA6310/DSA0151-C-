#include <iostream>
using namespace std;

double averageOfArray(int arr[], int size) {
    if (size == 0)
        return 0; 
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; 

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double arrayAverage = averageOfArray(arr, size);

    cout << "Average of array elements: " << arrayAverage << endl;

    return 0;
}
