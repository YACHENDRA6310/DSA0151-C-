#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    int rollNumber;
    string name;
    string address;
    string city;
    int marks1, marks2, marks3;

    void setStudentDetails() {
        cout << "Enter student roll number: ";
        cin >> rollNumber;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student address: ";
        cin >> address;
        cout << "Enter student city: ";
        cin >> city;
        cout << "Enter the marks1: ";
        cin >> marks1;
        cout << "Enter the marks2: ";
        cin >> marks2;
        cout << "Enter the marks3: ";
        cin >> marks3;
    }

    void displayStudentDetails() {
        cout << "Student Details:" << endl;
        cout << "********************" << endl;
        cout << "The student roll number: " << rollNumber << endl;
        cout << "The student name: " << name << endl;
        cout << "The student address: " << address << endl;
        cout << "The student city: " << city << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
    }
};
class Report : public Student {
public:
    float calculatePercentage() {
        return (marks1 + marks2 + marks3) / 3.0;
    }

    char calculateGrade() {
        float percentage = calculatePercentage();
        if (percentage >= 75)
            return 'A';
        else if (percentage >= 60)
            return 'B';
        else if (percentage >= 50)
            return 'C';
        else
            return 'D';
    }

    void displayReport() {
        displayStudentDetails();
        float percentage = calculatePercentage();
        char grade = calculateGrade();
        cout << "Total percentage: " << percentage << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Report studentReport;
    studentReport.setStudentDetails();
    studentReport.displayReport();
    return 0;
}
