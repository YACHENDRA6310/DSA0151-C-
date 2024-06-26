#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    int empID;
    string empName;
    float basicSalary;

    void setEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> empName;
        cout << "Enter basic salary of Employee: ";
        cin >> basicSalary;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
    }
};
class GrossSalary : public Employee {
public:
    float calculateGrossSalary() {
        return basicSalary + (0.1 * basicSalary);
    }
};
class NetSalary : public GrossSalary {
public:
    float calculateNetSalary() {
        float grossSalary = calculateGrossSalary();
        return grossSalary - (0.05 * grossSalary); 
    }
};
class SalaryDetails : public NetSalary {
public:
    void displaySalaryDetails() {
        displayEmployeeDetails();
        float grossSalary = calculateGrossSalary();
        float netSalary = calculateNetSalary();
        cout << "Gross Salary = Rs." << grossSalary << endl;
        cout << "Net Salary = Rs." << netSalary << endl;
    }
};

int main() {
    SalaryDetails empSalary;
    empSalary.setEmployeeDetails();
    empSalary.displaySalaryDetails();
    return 0;
}
\