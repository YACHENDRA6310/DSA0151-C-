#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int matrix1[3][3], matrix2[3][3], result[3][3] = {0};
    cout << "Enter the first matrix elements: " << endl;
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            cin >> matrix1[i][j];
    cout << "Enter the second matrix elements: " << endl;
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            cin >> matrix2[i][j];
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            for(int k = 0; k < cols; ++k)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
    cout << "Multiplication of the matrices: " << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
