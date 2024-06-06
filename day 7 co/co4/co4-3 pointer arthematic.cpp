#include <iostream>

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {10, 20, 30, 40, 50};
    std::cout << "Using array indexing:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }
    std::cout << "\nUsing pointers and pointer arithmetic:" << std::endl;
    int *ptr = arr;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }
    return 0;
}
