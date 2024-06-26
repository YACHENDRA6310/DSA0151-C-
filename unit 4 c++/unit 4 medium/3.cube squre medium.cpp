#include <iostream>
using namespace std;
class Number {
public:
    int value;
    void setValue(int val) {
        value = val;
    }
};
class Square : public Number {
public:
    int getSquare() {
        return value * value;
    }
};
class Cube : public Number {
public:
    int getCube() {
        return value * value * value;
    }
};

int main() {
    Square squareObj;
    Cube cubeObj;
    int num;
    cout << "Enter an integer number: ";
    cin >> num;
    squareObj.setValue(num);
    cout << "Square of " << num << " is: " << squareObj.getSquare() << endl;
    cout << "Enter an integer number: ";
    cin >> num;
    cubeObj.setValue(num);
    cout << "Cube of " << num << " is: " << cubeObj.getCube() << endl;
    return 0;
}
