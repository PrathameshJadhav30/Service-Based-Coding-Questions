#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()){
       return result;
    } 

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) 
    {
        // Left to right
        for (int j = left; j <= right; j++){
           result.push_back(matrix[top][j]);
        }   
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++){
           result.push_back(matrix[i][right]);
        }    
        right--;

        // Right to left
        if (top <= bottom) 
        {
            for (int j = right; j >= left; j--){
               result.push_back(matrix[bottom][j]);
            }  
            bottom--;
        }

        // Bottom to top
        if (left <= right) 
        {
            for (int i = bottom; i >= top; i--){
               result.push_back(matrix[i][left]);
            }    
            left++;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    vector<int> spiral = spiralOrder(matrix);

    cout << "Spiral Traversal:\n";
    for (int val : spiral)
        cout << val << " ";

    return 0;
}
