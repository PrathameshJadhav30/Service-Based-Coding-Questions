#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortArray(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    sortArray(arr);

    for(int num : arr) {
        cout << num << " ";
    }

    return 0;
}
