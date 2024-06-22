#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string Emp_name, Emp_id, Address, Mail_id;
    long long Mobile_no;

    void getEmployeeDetails() {
        cout << "Enter Name of the Employee: ";
        cin.ignore();
        getline(cin, Emp_name);
        cout << "Enter Address of the Employee: ";
        getline(cin, Address);
        cout << "Enter ID of the Employee: ";
        getline(cin, Emp_id);
        cout << "Enter Mobile Number: ";
        cin >> Mobile_no;
        cout << "Enter E-Mail ID of the Employee: ";
        cin >> Mail_id;
    }
};

class Programmer : public Employee {
public:
    double Basic_Pay;

    void getBasicPay() {
        cout << "Enter the Basic Pay of the Programmer: ";
        cin >> Basic_Pay;
    }

    void generatePaySlip() {
        double DA = 0.97 * Basic_Pay;
        double HRA = 0.10 * Basic_Pay;
        double PF = 0.12 * Basic_Pay;
        double Club_Fund = 0.001 * Basic_Pay;
        double Gross_Pay = Basic_Pay + DA + HRA;
        double Net_Pay = Gross_Pay - PF - Club_Fund;

        cout << "\n=======================\n";
        cout << "PROGRAMMER PAYMENT SLIP\n";
        cout << "=======================\n";
        cout << "BASIC PAY => " << Basic_Pay << endl;
        cout << "DEARNESS ALLOWANCE => " << DA << endl;
        cout << "HOUSE RENT ALLOWANCE => " << HRA << endl;
        cout << "PROVIDENT FUND => " << PF << endl;
        cout << "CLUB FUND => " << Club_Fund << endl;
        cout << "GROSS PAY => " << Gross_Pay << endl;
        cout << "NET PAY => " << Net_Pay << endl;
    }
};

int main() {
    Programmer prog;
    prog.getEmployeeDetails();
    prog.getBasicPay();
    prog.generatePaySlip();
    return 0;
}
