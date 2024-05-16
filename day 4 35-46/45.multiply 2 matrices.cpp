#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied!";
        return;
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void displayMatrix(int mat[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    cout << "Enter the number of rows and columns for first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the number of rows and columns for second matrix: ";
    cin >> rows2 >> cols2;

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }
    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
    cout << "Resultant matrix after multiplication:" << endl;
    displayMatrix(result, rows1, cols2);

    return 0;
}
