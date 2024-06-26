#include <iostream>

using namespace std;

class A {
protected:
    int x;
public:
    A(int value) : x(value) {}
};

class B : private A {
public:
    B(int value) : A(value) {}

    void showValue() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    B obj(10);
    obj.showValue();

    return 0;
}
