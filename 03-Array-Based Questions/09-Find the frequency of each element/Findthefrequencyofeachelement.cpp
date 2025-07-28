#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void printFrequencies(const vector<int>& arr) {
    unordered_map<int, int> freq;

    // Count frequency
    for (int num : arr) {
        freq[num]++;
    }

    // Print frequencies
    for (auto pair : freq) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 3, 3, 1, 5};

    printFrequencies(arr);
    return 0;
}
