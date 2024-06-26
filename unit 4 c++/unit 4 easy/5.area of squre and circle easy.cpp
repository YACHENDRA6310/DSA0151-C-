#include <iostream>
#include <cmath>

using namespace std;
class Shape {
public:
    virtual double area() const = 0; 
};

class Square : public Shape {
private:
    double length;
public:
    Square(double len) : length(len) {}
    double area() const override {
        return length * length;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double rad) : radius(rad) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    double radius, length;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter the length of the square: ";
    cin >> length;

    Shape* circle = new Circle(radius);
    Shape* square = new Square(length);

    cout << "Area of square: " << square->area() << endl;
    cout << "Area of circle: " << circle->area() << endl;

    delete circle;
    delete square;

    return 0;
}
