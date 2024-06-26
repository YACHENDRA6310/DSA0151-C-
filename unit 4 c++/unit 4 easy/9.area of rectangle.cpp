#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int getArea() const {
        return length * width;
    }
};

int main() {
    const int numRectangles = 2;
    Rectangle rectangles[numRectangles];
    rectangles[0].setDimensions(28, 20);
    rectangles[1].setDimensions(15, 10);
    for (int i = 0; i < numRectangles; i++) {
        cout << "Area of rectangle " << (i + 1) << ": " << rectangles[i].getArea() << endl;
    }

    return 0;
}
