#include <bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2) {
    // Step 1: Length check
    if (s1.length() != s2.length()) return false;

    // Step 2: Concatenate s1 with itself
    string temp = s1 + s1;

    // Step 3: Check if s2 is a substring of temp
    return (temp.find(s2) != string::npos);
}

int main() {
    string s1 = "ABCD";
    string s2 = "CDAB";

    if (areRotations(s1, s2))
        cout << "Yes, they are rotations.\n";
    else
        cout << "No, they are not rotations.\n";

    return 0;
}
