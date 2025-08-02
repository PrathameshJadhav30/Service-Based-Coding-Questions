#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];                 // primary diagonal
        sum += matrix[i][n - 1 - i];         // secondary diagonal
    }

    if(n % 2 == 1) {
        sum -= matrix[n/2][n/2];             // subtract center if counted twice
    }

    return sum;
}

int main() {
    int n = 3;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Diagonal Sum: " << diagonalSum(matrix) << endl;
    return 0;
}
