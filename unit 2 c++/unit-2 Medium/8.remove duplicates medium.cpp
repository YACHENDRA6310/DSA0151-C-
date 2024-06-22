#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {15, 14, 25, 14, 32, 14, 31};

    sort(arr.begin(), arr.end());

    auto last = unique(arr.begin(), arr.end());
    arr.erase(last, arr.end());

    cout << "Sorted Array = {";
    for(size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
