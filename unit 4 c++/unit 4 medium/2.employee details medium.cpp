#include <iostream>
#include <vector>
#include <iomanip>

class Employee {
    std::string name;
    int id;
    double basicSalary;
    double hra;
    double da;

public:
    void getDetails() {
        std::cout << "Enter the employee name: ";
        std::cin >> name;
        std::cout << "Enter the employee id: ";
        std::cin >> id;
        std::cout << "Enter the basic salary: ";
        std::cin >> basicSalary;
        std::cout << "Enter the hra: ";
        std::cin >> hra;
        std::cout << "Enter the da: ";
        std::cin >> da;
    }

    void displayDetails() const {
        double gp = basicSalary + hra + da;
        double np = gp - da; 
        
        std::cout << std::setw(10) << name
                  << std::setw(8) << id
                  << std::setw(10) << basicSalary
                  << std::setw(8) << hra
                  << std::setw(8) << da
                  << std::setw(8) << gp
                  << std::setw(8) << np
                  << std::endl;
    }
};

int main() {
    int numEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;

    std::vector<Employee> employees(numEmployees);

    for (int i = 0; i < numEmployees; ++i) {
        employees[i].getDetails();
    }

    std::cout << "\nEMPLOYEE NAME\tID\tBASIC\tHRA\tDA\tGP\tNP\n";
    for (const auto &employee : employees) {
        employee.displayDetails();
    }

    return 0;
}
