#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    reverseArray(arr);

    cout << "Reversed Array: ";
    for(int num : arr) {
        cout << num << " ";
    }

    return 0;
}
