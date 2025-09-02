#include <bits/stdc++.h>
using namespace std;

/*
Problem: Find the duplicate number in an array
Constraints:
- Array size = n + 1
- Numbers range from 1 to n
- Only one duplicate number exists (but it can repeat multiple times)
- Solve in O(n) time and O(1) space without modifying array
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Detect cycle using Floyd's algorithm
        int slow = nums[0];
        int fast = nums[0];

        // First meeting point inside the cycle
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Find the entrance of the cycle (duplicate number)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow; // or fast, both point to duplicate
    }
};

int main() {
    Solution obj;

    // Example 1
    vector<int> nums1 = {1, 3, 4, 2, 2};
    cout << "Duplicate in nums1: " << obj.findDuplicate(nums1) << endl;

    // Example 2
    vector<int> nums2 = {3, 1, 3, 4, 2};
    cout << "Duplicate in nums2: " << obj.findDuplicate(nums2) << endl;

    return 0;
}
