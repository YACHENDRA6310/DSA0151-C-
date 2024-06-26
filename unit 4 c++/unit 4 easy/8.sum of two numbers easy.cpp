#include <iostream>

using namespace std;

class Input1 {
protected:
    int x;
public:
    void getInput1() {
        cout << "Enter value of x: ";
        cin >> x;
    }
};

class Input2 {
protected:
    int y;
public:
    void getInput2() {
        cout << "Enter value of y: ";
        cin >> y;
    }
};

class Sum : public Input1, public Input2 {
public:
    void displaySum() {
        int sum = x + y;
        cout << "Sum = " << sum << endl;
    }
};

int main() {
    Sum obj;
    obj.getInput1();
    obj.getInput2();
    obj.displaySum();

    return 0;
}
