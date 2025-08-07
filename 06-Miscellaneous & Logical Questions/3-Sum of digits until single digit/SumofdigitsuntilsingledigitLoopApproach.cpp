#include <iostream>
using namespace std;

int sumDigitsUntilSingle(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Single digit sum: " << sumDigitsUntilSingle(num) << endl;
    return 0;
}
