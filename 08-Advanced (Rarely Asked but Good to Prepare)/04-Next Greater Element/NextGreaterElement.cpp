#include <bits/stdc++.h>
using namespace std;

// Function to find Next Greater Elements
vector<int> nextGreaterElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);  // default -1
    stack<int> st; // stack to store indices

    for (int i = n - 1; i >= 0; i--) {
        // Pop all smaller or equal elements from stack
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        // If stack not empty, top is the next greater element
        if (!st.empty()) {
            ans[i] = st.top();
        }
        // Push current element
        st.push(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr = {4, 5, 2, 25};

    vector<int> result = nextGreaterElements(arr);

    cout << "Next Greater Elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
