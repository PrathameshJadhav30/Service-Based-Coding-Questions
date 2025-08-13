#include <bits/stdc++.h>
using namespace std;

// Function to find frequency of digits in a number (string-based)
void findDigitFrequency(string numStr) {
    int freq[10] = {0};

    for (char ch : numStr) 
    {
        if (isdigit(ch)) { // ensure we only count digits
            freq[ch - '0']++;
        }
    }

    cout << "Digit frequencies:\n";
    for (int i = 0; i < 10; i++) 
    {
        cout << "Digit " << i << " : " << freq[i] << " times" << endl;
    }
}

int main() {
    string num;
    cout << "Enter a number: ";
    cin >> num; 

    findDigitFrequency(num);

    return 0;
}
