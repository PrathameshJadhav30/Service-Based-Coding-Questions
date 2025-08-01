#include <iostream>
using namespace std;

long long sumOfNaturalNumbers(long long N) {
    return (N * (N + 1)) / 2;
}

int main() {
    long long N;
    cout << "Enter a number: ";
    cin >> N;

    long long result = sumOfNaturalNumbers(N);
    cout << "Sum of first " << N << " natural numbers is: " << result << endl;

    return 0;
}
