#include<iostream>
using namespace std;

bool palindrome(int n){
    int original = n;
    int rev = 0;

    while(n > 0){
        int digit = n % 10;  //Get Last Digit
        rev = rev * 10 + digit; //Append Digit to Reversed Number
        n = n / 10;  //Remove Last Digit
    }

    return original == rev;
}
int main(){
    int n; 
    cout<<"Enter a Number: ";
    cin >> n;

    if(palindrome(n)){
        cout<<"Number is Palindrome."<<endl;
    }else{
        cout<<"Number is Not Palindrome."<<endl;
    }
}