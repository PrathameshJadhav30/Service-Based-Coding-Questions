#include<iostream>
using namespace std;

int reverseNumber(int n){
    int rev = 0;

    while(n > 0){
        int digit = n % 10;  //get last digit
        rev = rev * 10 + digit; //Apened to reverse
        n /= 10; // remove last digit
    }
    return rev;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int reverse = reverseNumber(n);

    cout<<"Reverse Number: "<<reverse<<endl;

    return 0;
}