#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    int sumDiagonals = 0;
    for(int i = 0; i < n; i++) {
        sumDiagonals += matrix[i][i]; 
        sumDiagonals += matrix[i][n - i - 1]; 
    }
    cout << "Sum of diagonals: " << sumDiagonals << endl;
    return 0;
}
