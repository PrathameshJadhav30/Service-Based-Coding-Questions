#include <bits/stdc++.h>
using namespace std;

// Function to calculate GCD of two numbers
long long gcdLL(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM of two numbers
long long lcmLL(long long a, long long b) {
    return (a / gcdLL(a, b)) * b; // Avoids overflow
}

int main() {
    // Static input
    int n = 5; 
    vector<long long> arr = {12, 18, 24, 30, 36}; // You can change values here

    long long gcdAll = arr[0];
    long long lcmAll = arr[0];

    for (int i = 1; i < n; i++) {
        gcdAll = gcdLL(gcdAll, arr[i]);
        lcmAll = lcmLL(lcmAll, arr[i]);
    }

    cout << "GCD: " << gcdAll << "\n";
    cout << "LCM: " << lcmAll << "\n";

    return 0;
}
