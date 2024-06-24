#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }
    Complex operator-(const Complex &obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imaginary = imaginary - obj.imaginary;
        return temp;
    }
    void display() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter the value of Complex Numbers a, b" << endl;
    cin >> a >> b;
    Complex c1(a, b);
    cout << "Enter the value of Complex Numbers a, b" << endl;
    cin >> a >> b;
    Complex c2(a, b);

    cout << endl << "Input Values" << endl;
    c1.display();
    c2.display();
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Result" << endl;
    sum.display();
    diff.display();

    return 0;
}
