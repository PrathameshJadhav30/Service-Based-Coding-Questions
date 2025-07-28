#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;

    // Insert elements of first array
    for (int num : arr1){
       merged.push_back(num);
    }
    // Insert elements of second array
    for (int num : arr2){
       merged.push_back(num);
    }
    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};

    vector<int> result = mergeArrays(arr1, arr2);

    for (int num : result){
        cout << num << " ";
    }  
    cout << endl;

    return 0;
}
