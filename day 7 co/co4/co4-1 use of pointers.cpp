#include <iostream>
void modifyValues(int *x, int *y);
int main() {
    int a = 5;
    int b = 10;
    std::cout << "Before modification:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    modifyValues(&a, &b);
    std::cout << "\nAfter modification:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    return 0;
}
void modifyValues(int *x, int *y) {
    *x = 20; 
    *y = 30; 
}
