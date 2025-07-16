#include<iostream>
using namespace std;

void CountAndSumDigits(int n){
    int count = 0, sum = 0;
    int original = n;

    while(n > 0){
        int digit = n % 10;
        sum += digit;
        count++;
        n /= 10;
    }
    cout << "Count of Digits: " << count << endl;
    cout << "Sum of Digits: " << sum << endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    CountAndSumDigits(n);

    return 0;
}