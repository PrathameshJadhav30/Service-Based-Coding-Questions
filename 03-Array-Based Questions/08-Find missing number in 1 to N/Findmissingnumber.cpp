#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(const vector<int>& arr, int n) {
    int totalSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int num : arr) {
        actualSum += num;
    }
    return totalSum - actualSum;
}

int main() {
    int n = 6;  
    vector<int> arr = {1, 2, 4, 5, 6};  

    cout << "Missing number is: " << findMissingNumber(arr, n) << endl;
    return 0;
}
