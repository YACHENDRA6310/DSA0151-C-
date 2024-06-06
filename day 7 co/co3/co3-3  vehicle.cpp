#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Vehicle {
private:
    int vehicleID;
    string vehicleType;

public:
    
    Vehicle(int id, const string& type) : vehicleID(id), vehicleType(type) {}

    Vehicle(const Vehicle& other) {
        vehicleID = other.vehicleID;
        vehicleType = other.vehicleType;
    }

    int getVehicleID() const {
        return vehicleID;
    }

    string getVehicleType() const {
        return vehicleType;
    }
};

class VehicleEntry {
private:
    queue<Vehicle> vehicleQueue;

public:
   
    void addVehicle(const Vehicle& vehicle) {
        vehicleQueue.push(vehicle);
    }

    void assignIDToUser(int userID) {
        if (!vehicleQueue.empty()) {
            Vehicle vehicle = vehicleQueue.front();
            cout << "Vehicle ID " << vehicle.getVehicleID() << " assigned to User with ID " << userID << endl;
            vehicleQueue.pop();
        } else {
            cout << "No vehicles available in the queue." << endl;
        }
    }

    bool isPlaceAvailable() const {
        return true; 
    }
};

int main() {
   
    Vehicle vehicle1(1, "Car");
    Vehicle vehicle2(2, "Motorcycle");

    VehicleEntry vehicleEntry;

    vehicleEntry.addVehicle(vehicle1);
    vehicleEntry.addVehicle(vehicle2);

    vehicleEntry.assignIDToUser(1001);
    vehicleEntry.assignIDToUser(1002);
    vehicleEntry.assignIDToUser(1003);

    return 0;
}
