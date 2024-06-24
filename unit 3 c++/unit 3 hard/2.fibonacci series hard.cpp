#include <iostream>
using namespace std;

class FibonacciSeries {
private:
    int limit;

public:
    void input() {
        cout << "Enter the limit: ";
        cin >> limit;
    }
    void show() {
        int a = 0, b = 1, c;
        cout << "Fibonacci series up to limit " << limit << ":\n";

        if (limit >= 1)
            cout << a << " ";
        if (limit >= 2)
            cout << b << " ";

        for (int i = 3; i <= limit; ++i) {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }

        cout << endl;
    }
};

int main() {
    FibonacciSeries obj;
    obj.input();
    obj.show();

    return 0;
}
