#include <iostream>
using namespace std;

class Shape {
public:
    double area;

    Shape(double radius) {
        area = 3.14 * radius * radius;
    }

    Shape(double length, double breadth) {
        area = length * breadth;
    }

    Shape(double base, double height, int dummy) {
        area = 0.5 * base * height;
    }

    void displayArea() {
        cout << "Area: " << area << endl;
    }
};

int main() {
    Shape circle(3);
    circle.displayArea();
    Shape rectangle(6, 7);
    rectangle.displayArea();
    Shape triangle(2, 3, 0); 
    triangle.displayArea();

    return 0;
}
