#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int n) {
    int missing = 0;
    int i = 0;
    
    while (i < n) {
        if (arr[i] != missing) {
            break;
        }
        missing++;
        i++;
    }
    
    return missing;
}

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findSmallestMissing(arr, n);
    cout << "The smallest missing element is " << missing << endl;
    return 0;
}
