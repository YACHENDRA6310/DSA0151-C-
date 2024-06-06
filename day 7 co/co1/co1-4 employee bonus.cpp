#include <iostream>

int main() {
    char grade;
    double salary;
    std::cout << "Enter the grade of the employee: ";
    std::cin >> grade;
    std::cout << "Enter the employee salary: ";
    std::cin >> salary;

    double bonus = 0.0;
    if (grade == 'A') {
        bonus = 0.05 * salary;
    } else if (grade == 'B') {
        bonus = 0.10 * salary;
    }
    if (salary < 10000) {
        bonus += 0.02 * salary;
    }
    double total_salary = salary + bonus;

    std::cout << "Salary = " << salary << std::endl;
    std::cout << "Bonus = " << bonus << std::endl;
    std::cout << "Total to be paid: " << total_salary << std::endl;

    return 0;
}
