#include <iostream>

using namespace std;

class Base1 {
protected:
    int a;
public:
    Base1(int value) : a(value) {}
    void showA() const {
        cout << "value of a: " << a << endl;
    }
};

class Base2 {
protected:
    int b;
public:
    Base2(int value) : b(value) {}
    void showB() const {
        cout << "value of b: " << b << endl;
    }
};

class Derived : public Base1, public Base2 {
private:
    int c;
public:
    Derived(int valueA, int valueB, int valueC) : Base1(valueA), Base2(valueB), c(valueC) {}
    void showC() const {
        cout << "value of c: " << c << endl;
    }
    void showValues() const {
        showA();
        showB();
        showC();
    }
};

int main() {
    Derived obj(100, 200, 300);
    obj.showValues();

    return 0;
}
