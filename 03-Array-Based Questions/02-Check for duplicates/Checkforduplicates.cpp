#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool checkForDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    for (int num : arr) {
        if (seen.count(num)) {
            return true;  // Duplicate found
        }
        seen.insert(num);
    }
    return false;  // No duplicates found
}

int main() {
    vector<int> arr = {3, 7, 2, 5, 7, 9};
    if (checkForDuplicates(arr))
        cout << "Duplicates Found" << endl;
    else
        cout << "No Duplicates" << endl;

    return 0;
}
