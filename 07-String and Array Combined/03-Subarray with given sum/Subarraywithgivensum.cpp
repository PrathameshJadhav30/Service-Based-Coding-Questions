#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>& arr, int n, long long S) {
    int left = 0;
    long long currSum = 0;

    for (int right = 0; right < n; right++) 
    {
        currSum += arr[right];  // expand window

        // shrink window until currSum <= S
        while (currSum > S && left < right) 
        {
            currSum -= arr[left];
            left++;
        }

        if (currSum == S) 
        {
            return {left + 1, right + 1}; // 1-based indexing
        }
    }

    return {-1}; // not found
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 5};
    int n = arr.size();
    long long S = 12;

    vector<int> ans = subarraySum(arr, n, S);

    if (ans.size() == 1 && ans[0] == -1)
        cout << -1 << endl;
    else
        cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
