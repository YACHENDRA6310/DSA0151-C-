#include <iostream>
using namespace std;

void getPerson(int& age) {
    cout << "Enter your age: ";
    cin >> age;
}
void checkEligibility(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote\n";
    } else {
        int yearsLeft = 18 - age;
        cout << "You are allowed to vote after " << yearsLeft << " years\n";
    }
}
int main() {
    int age;
    getPerson(age);
    checkEligibility(age);  
    return 0;
}
