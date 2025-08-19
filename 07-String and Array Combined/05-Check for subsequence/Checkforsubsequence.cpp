#include <bits/stdc++.h>
using namespace std;

// Function to check if s2 is subsequence of s1
bool isSubsequence(string s1, string s2) {
    int i = 0, j = 0;
    int n = s1.size(), m = s2.size();

    // Traverse both strings
    while (i < n && j < m) {
        if (s1[i] == s2[j]) {
            j++; // move in s2 if match
        }
        i++; // always move in s1
    }

    // If j reached end of s2, all characters matched
    return j == m;
}

int main() {
    string s1, s2;
    cout << "Enter string s1: ";
    cin >> s1;
    cout << "Enter string s2: ";
    cin >> s2;

    if (isSubsequence(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
