#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    Complex operator - (const Complex &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
    void input() {
        cout << "Enter the value of Complex Numbers a, b" << endl;
        cin >> real >> imag;
    }
};

int main() {
    Complex c1, c2, sum, diff;

    cout << "Input first complex number:\n";
    c1.input();

    cout << "Input second complex number:\n";
    c2.input();

    sum = c1 + c2; 
    diff = c1 - c2; 

    cout << "Input Values\n";
    c1.display();
    c2.display();

    cout << "Result\n";
    sum.display();
    diff.display();

    return 0;
}
