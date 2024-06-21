#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class StringConverter {
public:
    StringConverter(const string& input) : str(input) {}

    string toUpperCase() {
        string result = str;
        transform(result.begin(), result.end(), result.begin(), ::toupper);
        return result;
    }

    string toLowerCase() {
        string result = str;
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }

private:
    string str;
};

int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);

    StringConverter converter(input);

    cout << "The string in upper case: " << converter.toUpperCase() << endl;
    cout << "The string in lower case: " << converter.toLowerCase() << endl;

    return 0;
}
