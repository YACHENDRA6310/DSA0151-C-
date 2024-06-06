#include <iostream>

class MyClass {
private:
    int x;

public:
   
    MyClass() {
        x = 0;
    }

    MyClass(int val) {
        x = val;
    }

    int getX() {
        return x;
    }
};

int main() {
    
    MyClass obj1;
    std::cout << "Value of x using default constructor: " << obj1.getX() << std::endl;

    MyClass obj2(5);
    std::cout << "Value of x using parameterized constructor: " << obj2.getX() << std::endl;

    MyClass obj3(10);
    std::cout << "Value of x using parameterized constructor with a different value: " << obj3.getX() << std::endl;

    return 0;
}
