#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortStringCharacters(string s) {
        // sort() from algorithm library will sort characters in ascending ASCII order
        sort(s.begin(), s.end());
        return s;
    }
};

int main() {
    Solution obj;

    // Example 1
    string s1 = "dcba";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << obj.sortStringCharacters(s1) << endl << endl;

    // Example 2
    string s2 = "leetcode";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << obj.sortStringCharacters(s2) << endl << endl;

    // Example 3 
    string s3 = "openai";
    cout << "Input: " << s3 << endl;
    cout << "Output: " << obj.sortStringCharacters(s3) << endl;

    return 0;
}
