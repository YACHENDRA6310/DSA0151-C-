#include <iostream>
#include <string>

using namespace std;

class BasicInfo {
protected:
    string name;
    int age;
    char gender;
public:
    void getBasicInfo() {
        cout << "Enter student's basic information:\n";
        cout << "Name?: ";
        cin >> name;
        cout << "Age?: ";
        cin >> age;
        cout << "Gender?: ";
        cin >> gender;
    }

    void showBasicInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class ResultInfo : public BasicInfo {
private:
    int totalMarks;
    char grade;
public:
    void getResultInfo() {
        cout << "Enter student's result information:\n";
        cout << "Total Marks?: ";
        cin >> totalMarks;
        cout << "Grade?: ";
        cin >> grade;
    }

    void showResultInfo() const {
        double percentage = (totalMarks / 500.0) * 100; // Assuming total marks out of 500
        showBasicInfo();
        cout << "Total Marks: " << totalMarks << ", Percentage: " << percentage << ", Grade: " << grade << endl;
    }
};

int main() {
    ResultInfo student;
    student.getBasicInfo();
    student.getResultInfo();
    student.showResultInfo();

    return 0;
}
