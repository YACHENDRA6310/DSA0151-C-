#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int reg_no;
    int marks[5];
    int total_marks;

public:

    void getdata() {
        std::cout << "Enter student's name: ";
        std::cin >> name;
        std::cout << "Enter student's registration number: ";
        std::cin >> reg_no;
        std::cout << "Enter 5 marks: ";
        for(int i = 0; i < 5; ++i) {
            std::cin >> marks[i];
        }
    }

    void tot_marks();
};

void Student::tot_marks() {
    total_marks = 0;
    for(int i = 0; i < 5; ++i) {
        total_marks += marks[i];
    }
    std::cout << "Total marks: " << total_marks << std::endl;
}

int main() {
    Student student;
    student.getdata();
    student.tot_marks();
    return 0;
}
