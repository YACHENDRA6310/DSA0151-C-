#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter Infinite Numbers and (-1 To Stop Reading)" << endl;
    while (true) {
        cin >> num;
        if (num == -1) break;
        numbers.push_back(num);
    }
    sort(numbers.begin(), numbers.end());

    cout << "The Ascending order is given below:" << endl;
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << endl;
    }

    return 0;
}
