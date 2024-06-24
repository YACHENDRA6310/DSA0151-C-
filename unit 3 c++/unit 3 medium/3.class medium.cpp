#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass(); 
    void display(); 
};
MyClass::MyClass() {
    cout << "Constructor called" << endl;
}
void MyClass::display() {
    cout << "Hello from MyClass!" << endl;
}
int main() {
    MyClass obj; 
    obj.display(); 
    return 0;
}
