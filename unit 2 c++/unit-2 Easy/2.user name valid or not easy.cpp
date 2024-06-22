#include <iostream>
#include <string>
using namespace std;

bool isValidUserName(const string& username1, const string& username2) {
    return username1 == username2;
}

int main() {
    string username1, username2;
    
    cout << "Enter the user name: ";
    getline(cin, username1);
    
    cout << "Reenter the user name: ";
    getline(cin, username2);
    
    if (isValidUserName(username1, username2)) {
        cout << "User name is Valid\n";
    } else {
        cout << "User name is Invalid\n";
    }
    
    return 0;
}
