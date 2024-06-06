#include <iostream>
#include <vector>
#include <string>

class Course;

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    int studentID;

public:
    Student(const std::string& n, int a, int id) : Person(n, a), studentID(id) {}

    void display() const override {
        std::cout << "Student ID: " << studentID << ", ";
        Person::display();
    }
};

class Professor : public Person {
private:
    std::string department;

public:
    Professor(const std::string& n, int a, const std::string& dep) : Person(n, a), department(dep) {}

    void display() const override {
        std::cout << "Department: " << department << ", ";
        Person::display();
    }
};

class Course {
private:
    std::string name;
    Professor* instructor;
    std::vector<Student*> students;

public:
    Course(const std::string& n, Professor* prof) : name(n), instructor(prof) {}

    void addStudent(Student* student) {
        students.push_back(student);
    }

    void display() const {
        std::cout << "Course Name: " << name << std::endl;
        std::cout << "Instructor: ";
        instructor->display();
        std::cout << "Students Enrolled:" << std::endl;
        for (const auto& student : students) {
            student->display();
        }
    }
};

int main() {
    Professor prof1("Dr. Smith", 45, "Computer Science");
    Professor prof2("Dr. Johnson", 50, "Mathematics");
    Student student1("Alice", 20, 1001);
    Student student2("Bob", 22, 1002);
    Course course1("Introduction to Programming", &prof1);
    course1.addStudent(&student1);
    course1.addStudent(&student2);
    Course course2("Linear Algebra", &prof2);
    course2.addStudent(&student1);
    course1.display();
    std::cout << std::endl;
    course2.display();

    return 0;
}
