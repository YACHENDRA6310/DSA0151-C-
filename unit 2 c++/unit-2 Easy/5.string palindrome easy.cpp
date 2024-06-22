#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
inline bool isPalindrome(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    string input;

    cout << "Enter the string: ";
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::toupper);

    if (isPalindrome(input)) {
        cout << "THE GIVEN STRING IS PALINDROME" << endl;
    } else {
        cout << "THE GIVEN STRING IS NOT PALINDROME" << endl;
    }

    return 0;
}
