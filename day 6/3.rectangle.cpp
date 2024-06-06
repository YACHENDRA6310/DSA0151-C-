#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Rectangle created with length " << length << " and width " << width << endl;
    }
    ~Rectangle() {
        cout << "Rectangle with length " << length << " and width " << width << " is being destroyed." << endl;
    }
    double area() {
        return length * width;
    }
    double perimeter() {
        return 2 * (length + width);
    }
    void displayRectangleInfo() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};
int main() {
    Rectangle rect(5.0, 3.0);
    rect.displayRectangleInfo();
    return 0;
}
