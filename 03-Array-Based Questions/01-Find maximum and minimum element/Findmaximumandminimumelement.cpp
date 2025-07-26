#include <iostream>
#include <vector>
#include <climits>     // For INT_MAX and INT_MIN
#include <algorithm>   // For min() and max()
using namespace std;

void findMinMax(const vector<int>& arr) {
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int num : arr) {
        minVal = min(minVal, num);
        maxVal = max(maxVal, num);
    }

    cout << "Min: " << minVal << ", Max: " << maxVal << endl;
}

int main() {
    vector<int> arr = {5, 2, 9, -3, 7, 1};
    findMinMax(arr);

    return 0;
}
