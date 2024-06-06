#include <iostream>
using namespace std;

class ClassB; 

class ClassA {
private:
    int numA;

public:
    void get_data() {
        cout << "Enter number for ClassA: ";
        cin >> numA;
    }

    friend int max(const ClassA& a, const ClassB& b);
};

class ClassB {
private:
    int numB;

public:
    void get_data() {
        cout << "Enter number for ClassB: ";
        cin >> numB;
    }

    friend int max(const ClassA& a, const ClassB& b);
};

int max(const ClassA& a, const ClassB& b) {
    return (a.numA > b.numB) ? a.numA : b.numB;
}

int main() {
    ClassA a;
    ClassB b;

    a.get_data();
    b.get_data();

    cout << "The maximum number is: " << max(a, b) << endl;

    return 0;
}
