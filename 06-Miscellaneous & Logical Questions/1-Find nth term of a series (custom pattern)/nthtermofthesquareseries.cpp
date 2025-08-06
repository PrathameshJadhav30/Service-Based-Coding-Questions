#include <iostream>
using namespace std;

//  calculate the nth term of the series (n^2)
int findNthTerm(int n) {
    return n * n;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int nthTerm = findNthTerm(n);
    cout << "The " << n << "th term is: " << nthTerm << endl;

    return 0;
}
