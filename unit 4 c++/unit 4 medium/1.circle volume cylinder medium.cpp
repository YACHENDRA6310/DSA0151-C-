#include <iostream>
#define PI 3.141592653589793238

class Circle {
protected:
    double radius;
public:
    void getRadius() {
        std::cout << "Enter the radius: ";
        std::cin >> radius;
    }
    double areaCircle() {
        return PI * radius * radius;
    }
};

class Rectangle : public Circle {
protected:
    double length, breadth;
public:
    void getDimensions() {
        std::cout << "Enter the length: ";
        std::cin >> length;
        std::cout << "Enter the breadth: ";
        std::cin >> breadth;
    }
    double areaRectangle() {
        return length * breadth;
    }
};

class Cylinder : public Rectangle {
private:
    double height;
public:
    void getHeight() {
        std::cout << "Enter the height: ";
        std::cin >> height;
    }
    double volumeCylinder() {
        return PI * radius * radius * height;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Cylinder cylinder;
    std::cout << "\nGetting the radius of the circle" << std::endl;
    circle.getRadius();
    std::cout << "The area = " << circle.areaCircle() << std::endl;
    std::cout << "\nGetting the length and breadth of the rectangle" << std::endl;
    rectangle.getDimensions();
    std::cout << "The area = " << rectangle.areaRectangle() << std::endl;
    std::cout << "\nGetting the height and radius of the cylinder" << std::endl;
    cylinder.getRadius();
    cylinder.getHeight();
    std::cout << "The volume of the cylinder is: " << cylinder.volumeCylinder() << std::endl;

    return 0;
}
