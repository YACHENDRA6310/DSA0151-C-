#include <iostream>

using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    void setValues(int r, int i) {
        real = r;
        imaginary = i;
    }

    void display() const {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    Complex obj;
    Complex* ptr = &obj; 
    ptr->setValues(1, 54);
    ptr->display();

    return 0;
}
