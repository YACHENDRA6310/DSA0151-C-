#include <iostream>
using namespace std;

int main() {
    const int numSubjects = 5;
    int marks[numSubjects];
    int total = 0;
    double average, percentage;

    cout << "Please Enter the marks of five subjects: ";
    for (int i = 0; i < numSubjects; ++i) {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / static_cast<double>(numSubjects);
    percentage = (total / static_cast<double>(numSubjects * 100)) * 100;

    cout << "Total Marks      = " << total << endl;
    cout << "Average Marks    = " << average << endl;
    cout << "Marks Percentage = " << percentage << endl;

    if (percentage >= 75) {
        cout << "Grade A (Distinction)" << endl;
    } else if (percentage >= 60) {
        cout << "Grade B (First Division)" << endl;
    } else if (percentage >= 50) {
        cout << "Grade C (Second Division)" << endl;
    } else if (percentage >= 40) {
        cout << "Grade D (Third Division)" << endl;
    } else {
        cout << "Grade E (Fail)" << endl;
    }

    return 0;
}
