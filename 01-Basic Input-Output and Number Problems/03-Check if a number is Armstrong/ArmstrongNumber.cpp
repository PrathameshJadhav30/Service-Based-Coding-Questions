#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
    int original = n; 
    int sum = 0;

    // Step-1: Count number of digits
    int digits = 0;
    int temp = n;
    while(temp > 0){
        digits++;
        temp /= 10;
    }

    // Step-2: Calculate sum of each digit raised to digit power
    temp = n;
    while(temp > 0){
        int digit = temp % 10;           // Get last digit
        //sum += pow(digit, digits);     // might cause floating point error
        sum += round(pow(digit, digits));  //  round it to nearest integer. Add digit^digits
        temp /= 10;
    }

    return sum == original;
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if(isArmstrong(n)){
        cout << "Number is Armstrong." << endl;
    } else {
        cout << "Number is Not Armstrong." << endl;
    }

    return 0;
}
