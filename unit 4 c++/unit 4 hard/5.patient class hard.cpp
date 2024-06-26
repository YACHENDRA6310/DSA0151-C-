#include <iostream>
#include <string>
using namespace std;
class Patient {
public:
    string patientName;
    int bedNumber;
    string wardName;
    float dues;

    void setPatientDetails() {
        cout << "Enter Patient Name: ";
        cin >> patientName;
        cout << "Enter Bed Number: ";
        cin >> bedNumber;
        cout << "Enter Ward Name: ";
        cin >> wardName;
        cout << "Enter Dues of Patient: ";
        cin >> dues;
    }

    void displayPatientDetails() {
        cout << "Patient Name: " << patientName << endl;
        cout << "Bed Number: " << bedNumber << endl;
        cout << "Ward Name: " << wardName << endl;
        cout << "Total Dues of Patient: " << dues << endl;
    }
};
class Doctor : public Patient {
public:
    string doctorName;
    string doctorateDegree;

    void setDoctorDetails() {
        cout << "Enter the Doctor Name: ";
        cin >> doctorName;
        cout << "Enter Doctorate Degree: ";
        cin >> doctorateDegree;
    }

    void displayDoctorDetails() {
        cout << "Doctor Name: " << doctorName << endl;
        cout << "Doctorate Degree: " << doctorateDegree << endl;
    }

    void displayDetails() {
        displayPatientDetails();
        displayDoctorDetails();
    }
};

int main() {
    Doctor doc;
    cout << "Enter Data" << endl;
    doc.setPatientDetails();
    doc.setDoctorDetails();

    cout << "Inserted Data is:" << endl;
    doc.displayDetails();

    return 0;
}
