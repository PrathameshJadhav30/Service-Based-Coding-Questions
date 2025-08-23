#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> leaders;
        int maxFromRight = arr[n - 1]; // last element is always a leader
        leaders.push_back(maxFromRight);

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxFromRight) {
                maxFromRight = arr[i];
                leaders.push_back(arr[i]);
            }
        }
        reverse(leaders.begin(), leaders.end()); // maintain left-to-right order
        return leaders;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> result = sol.leaders(arr);
    
    cout << "Leaders in array: ";

    for (int x : result){
      cout << x << " ";
    } 
    cout << endl;

    return 0;
}
