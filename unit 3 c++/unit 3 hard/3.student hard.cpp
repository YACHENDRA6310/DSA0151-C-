#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int regNo;
    int mark1, mark2, mark3;
    float average;
    char grade;

public:
    void input() {
        cout << "ENTER THE STUDENT NAME => ";
        getline(cin >> ws, name);  
        cout << "ENTER THE REGISTER NUMBER => ";
        cin >> regNo;

        cout << "MARK 1 => ";
        cin >> mark1;

        cout << "MARK 2 => ";
        cin >> mark2;

        cout << "MARK 3 => ";
        cin >> mark3;
    }
    void calculateAverage() {
        average = (mark1 + mark2 + mark3) / 3.0;
    }
    void calculateGrade() {
        if (average > 90)
            grade = 'S';
        else if (average > 80)
            grade = 'A';
        else if (average > 70)
            grade = 'C';
        else if (average > 60)
            grade = 'D';
        else if (average > 50)
            grade = 'E';
        else
            grade = 'F';
    }
    void display() {
        cout << "STUDENT DETAILS:" << endl;
        cout << "Name: " << name << endl;
        cout << "Register Number: " << regNo << endl;
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Average Score: " << fixed << setprecision(2) << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    int numStudents;

    cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    cin >> numStudents;
    cin.ignore();
    Student students[10]; 
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << endl;
        students[i].input();
        students[i].calculateAverage();
        students[i].calculateGrade();
    }
    for (int i = 0; i < numStudents; ++i) {
        cout << endl;
        students[i].display();
    }

    return 0;
}
