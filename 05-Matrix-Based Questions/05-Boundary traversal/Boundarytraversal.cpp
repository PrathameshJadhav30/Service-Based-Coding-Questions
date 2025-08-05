#include <iostream>
#include <vector>
using namespace std;

void boundaryTraversal(vector<vector<int>>& matrix, int m, int n) {
    // If only one row, print all columns
    if (m == 1) {
        for (int i = 0; i < n; i++) {
            cout << matrix[0][i] << " ";
        }
    }
    // If only one column, print all rows
    else if (n == 1) {
        for (int i = 0; i < m; i++) {
            cout << matrix[i][0] << " ";
        }
    }
    // General case
    else {
        // Top row
        for (int i = 0; i < n; i++) {
            cout << matrix[0][i] << " ";
        }

        // Right column
        for (int i = 1; i < m; i++) {
            cout << matrix[i][n - 1] << " ";
        }

        // Bottom row
        for (int i = n - 2; i >= 0; i--) {
            cout << matrix[m - 1][i] << " ";
        }

        // Left column
        for (int i = m - 2; i > 0; i--) {
            cout << matrix[i][0] << " ";
        }
    }
    
}

int main() {
    vector<vector<int>> matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15,16}
    };

    int m = matrix.size();
    int n = matrix[0].size();

    cout << "Boundary Traversal: ";
    boundaryTraversal(matrix, m, n);

    return 0;
}
