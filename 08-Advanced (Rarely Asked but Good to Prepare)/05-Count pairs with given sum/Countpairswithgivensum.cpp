#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& arr, int k) {
    unordered_map<int, int> freq; // store frequency of numbers
    int count = 0;

    for (int x : arr) {
        int target = k - x;

        // If complement already seen, it forms pairs
        if (freq.find(target) != freq.end()) {
            count += freq[target];
        }

        // Store current element in map
        freq[x]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int k = 6;

    cout << "Count of pairs = " << countPairs(arr, k) << endl;

    return 0;
}
