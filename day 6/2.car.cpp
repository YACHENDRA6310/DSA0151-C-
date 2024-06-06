#include <iostream>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    Car(string carMake, string carModel, int carYear) {
        make = carMake;
        model = carModel;
        year = carYear;
        cout << "Car " << make << " " << model << " (" << year << ") created." << endl;
    }
    ~Car() {
        cout << "Car " << make << " " << model << " (" << year << ") destroyed." << endl;
    }
    void displayCarInfo() {
        cout << "Car Make: " << make << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};
int main() {
    Car myCar("Toyota", "Corolla", 2020);
    myCar.displayCarInfo();
    return 0;
}
