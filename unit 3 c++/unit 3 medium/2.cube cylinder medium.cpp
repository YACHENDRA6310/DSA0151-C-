#include <iostream>
using namespace std;

class Shape {
public:
    double volume;
    Shape(double side) {
        volume = side * side * side;
    }
    Shape(double radius, double height) {
        volume = 3.14 * radius * radius * height;
    }

    void displayVolume() {
        cout << "Volume: " << volume << endl;
    }
};

int main() {
    Shape cube(3);
    cube.displayVolume();
    Shape cylinder(2, 5);
    cylinder.displayVolume();

    return 0;
}
