#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size(), m = matrix[0].size();
    int row = 0, col = m - 1;

    while (row < n && col >= 0) {
        if (matrix[row][col] == target){
          return true;
        }   
        else if (matrix[row][col] > target){
          col--;
        }   
        else{
           row++;
        }
            
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16}
    };
    int target = 8;

    if (searchMatrix(matrix, target)){
       cout << "Found\n";
    }   
    else{
      cout << "Not Found\n";
    }
        
    return 0;
}
