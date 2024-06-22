#include <iostream>
using namespace std;

class largest {
private:
    int a, b;
    static int m;

public:
    void setdata(int x, int y) {
        a = x;
        b = y;
    }

    friend void find_Max(largest obj);
};

int largest::m = 0;

void find_Max(largest obj) {
    if (obj.a > obj.b) {
        largest::m = obj.a;
    } else {
        largest::m = obj.b;
    }
    cout << "Maximum no is " << largest::m << endl;
}

int main() {
    largest obj;
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    obj.setdata(num1, num2);
    find_Max(obj);

    return 0;
}
