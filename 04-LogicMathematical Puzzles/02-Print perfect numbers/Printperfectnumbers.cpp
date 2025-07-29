#include<iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 1;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            sum += i;
            if(i != num / i) {
                sum += num / i;
            }
        }
    }
    return (num != 1 && sum == num);
}

int main() {
    int number = 28; 

    if(isPerfect(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}
