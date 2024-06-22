#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int regno;
    int mark1, mark2, mark3;
    float average;
    char grade;

    void calculate() {
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90)
            grade = 'S';
        else if (average > 80)
            grade = 'A';
        else if (average > 70)
            grade = 'B';
        else if (average > 60)
            grade = 'C';
        else if (average > 50)
            grade = 'D';
        else
            grade = 'F';
    }

public:
    void input() {
        cout << "ENTER THE STUDENT NAME =>";
        cin >> name;
        cout << "ENTER THE REGISTER NUMBER =>";
        cin >> regno;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
        calculate();
    }
    void show() {
        cout << "AVERAGE SCORE IS => " << average << endl;
        cout << grade << " GRADE" << endl;
    }
};

int main() {
    int num;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES =>";
    cin >> num;
    
    Student students[num]; 
    for (int i = 0; i < num; i++) {
        cout << "\nStudent " << i + 1 << " details:\n";
        students[i].input();
        students[i].show();
    }
    
    return 0;
}
