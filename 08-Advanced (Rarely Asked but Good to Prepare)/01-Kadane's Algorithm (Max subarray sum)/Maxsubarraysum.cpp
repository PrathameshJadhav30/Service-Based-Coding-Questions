#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];    // stores the maximum sum found so far
        int currentSum = nums[0]; // stores the current running sum

        for (int i = 1; i < nums.size(); i++) {
            // either extend the current subarray or start a new subarray
            currentSum = max(nums[i], currentSum + nums[i]);

            // update maxSum if currentSum is greater
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum Subarray Sum = " << obj.maxSubArray(arr) << endl;

    return 0;
}
