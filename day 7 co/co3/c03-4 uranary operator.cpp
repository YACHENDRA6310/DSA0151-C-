#include <iostream>
#include <string>

using namespace std;

class StringConcatenator {
private:
    string str;

public:
    StringConcatenator(const string& s) : str(s) {}

    StringConcatenator operator+() {
        return *this;
    }

    StringConcatenator operator+(const StringConcatenator& other) {
        StringConcatenator result(str + other.str);
        return result;
    }

    void display() {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    
    StringConcatenator s1("Hello, ");
    StringConcatenator s2("world!");
    StringConcatenator result = +s1 + s2;
    result.display();

    return 0;
}
