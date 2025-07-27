#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Reverse helper
void reverseVector(vector<int>& arr, int start, int end) {
    while(start < end) {
        swap(arr[start++], arr[end--]);
    }
}

// Left Rotation
void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k %= n;  // Handle large k

    reverseVector(arr, 0, k - 1);
    reverseVector(arr, k, n - 1);
    reverseVector(arr, 0, n - 1);
}

// Right Rotation
void rightRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k %= n;  // Handle large k
    k = n - k;  // Convert right rotation to left

    reverseVector(arr, 0, k - 1);
    reverseVector(arr, k, n - 1);
    reverseVector(arr, 0, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;

    // leftRotate(arr, k);
    rightRotate(arr, k);
    cout << "Rotated Array: ";
    for(int num : arr) {
        cout << num << " ";
    }

    return 0;
}
