#include <iostream>
using namespace std;

class Series {
    int limit;

public:
    void input() {
        cout << "Enter the limit: ";
        cin >> limit;
    }
    void show() {
        int a = 0, b = 1, next;
        cout << a << " " << b << " ";
        for (int i = 2; i < limit; ++i) {
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
        cout << endl;
    }
};

int main() {
    Series s;
    s.input();
    s.show();
    return 0;
}
