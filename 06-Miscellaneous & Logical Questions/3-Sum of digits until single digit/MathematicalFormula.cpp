#include <iostream>
using namespace std;

int digitalRoot(int n) {
    if (n == 0){
       return 0;
    } 
    return 1 + (n - 1) % 9;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Single digit sum: " << digitalRoot(num) << endl;
    return 0;
}
