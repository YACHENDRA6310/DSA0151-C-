#include <iostream>
#include <string>
class Person {
protected:
    std::string name;
    std::string address;
public:
    Person(const std::string& n, const std::string& addr) : name(n), address(addr) {}
    void displayPersonInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Address: " << address << std::endl;
    }
};
class Employee {
protected:
    int employeeID;
    double salary;
public:
    Employee(int id, double sal) : employeeID(id), salary(sal) {}
    void displayEmployeeInfo() {
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};
class DisplayInfo : public Person, public Employee {
public:
    DisplayInfo(const std::string& n, const std::string& addr, int id, double sal)
        : Person(n, addr), Employee(id, sal) {}
    void displayAllInfo() {
        displayPersonInfo();   
        displayEmployeeInfo(); 
    }
};
int main() {
    DisplayInfo employee("John Doe", "123 Main St", 1001, 50000.0);
    std::cout << "Employee Information:" << std::endl;
    employee.displayAllInfo();
    return 0;
}
