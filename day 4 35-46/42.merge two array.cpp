#include <iostream>
using namespace std;
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}
int main() {
    const int MAX_SIZE = 100;
    int arr1[MAX_SIZE] = {1, 3, 5, 7};
    int size1 = 4; 
    int arr2[MAX_SIZE] = {2, 4, 6};
    int size2 = 3; 
    int mergedArr[MAX_SIZE + MAX_SIZE]; 
    mergeArrays(arr1, size1, arr2, size2, mergedArr);
    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;
    return 0;
}
