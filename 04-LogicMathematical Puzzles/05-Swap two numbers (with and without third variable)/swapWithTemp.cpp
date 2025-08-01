#include <iostream>
using namespace std;

void swapWithTemp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swap : a = " << a << ", b = " << b << endl;
    swapWithTemp(a, b);
    cout << "After swap : a = " << a << ", b = " << b << endl;

    return 0;
}
