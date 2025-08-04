#include <iostream>
#include <vector>
using namespace std;

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
}

// Function to compute transpose
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix, int m, int n) {
    vector<vector<int>> transpose(n, vector<int>(m));

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
}

int main() {
    int m = 2, n = 3;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    vector<vector<int>> result = transposeMatrix(matrix, m, n);

    cout << "\nTranspose Matrix:\n";
    printMatrix(result);

    return 0;
}