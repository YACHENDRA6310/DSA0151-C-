#include <iostream>
using namespace std;

class Box {
public:
    int length;

   
    void setWidth(int w) {
        width = w;
    }

       int getWidth() {
        return width;
    }

private:
    int width;
};

int main() {
    Box box;
    int len, wid;

    cout << "Enter the Length of box: ";
    cin >> len;
    cout << "Enter the Width of box: ";
    cin >> wid;

    box.length = len;
    box.setWidth(wid);

    cout << "Length of box: " << box.length << endl;
    cout << "Width of box: " << box.getWidth() << endl;

    return 0;
}
