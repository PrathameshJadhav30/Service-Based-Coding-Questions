#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<int> removeDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : arr) {
        if (seen.find(num) == seen.end()) {
            result.push_back(num);
            seen.insert(num);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {4, 2, 4, 5, 2, 3, 5};

    vector<int> uniqueArr = removeDuplicates(arr);

    cout << "Array after removing duplicates: ";
    for (int num : uniqueArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
