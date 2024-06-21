#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findMostFrequentElement(vector<int>& arr) {
    unordered_map<int, int> freqMap;
    for (int num : arr) {
        freqMap[num]++;
    }
    int maxFreq = 0;
    int mostFrequentElement = arr[0]; 
    for (auto& pair : freqMap) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            mostFrequentElement = pair.first;
        }
    }
    
    return mostFrequentElement;
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    
    vector<int> arr(size);
    
    cout << "\nEnter elements in the array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Entered Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    int mostFrequent = findMostFrequentElement(arr);
    
    cout << "Most occurred number: " << mostFrequent << endl;
    
    return 0;
}
