#include <iostream>

using namespace std;

class Example {
private:
    int x;
public:
    Example(int x) {
        this->x = x;
    }

    void setX(int x) {
                this->x = x;
    }

    void printX() const {
        cout << "x = " << this->x << endl;
    }
};

int main() {
    Example obj(20); 
    obj.printX();    

    return 0;
}
