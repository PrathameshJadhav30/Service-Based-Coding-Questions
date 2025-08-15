#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
           return "";
        } 

        // Step 1: Sort the array
        sort(strs.begin(), strs.end());

        // Step 2: Compare first and last string
        string first = strs.front();
        string last = strs.back();
        int i = 0;
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i);
    }
};

int main() {
    vector<string> strs = {"flower","flow","flight"};

    Solution sol;
    string ans = sol.longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << ans << endl;

    return 0;
}
