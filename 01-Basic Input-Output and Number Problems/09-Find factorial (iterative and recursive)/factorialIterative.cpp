#include<iostream>
using namespace std;

long long factorialIterative(int n){
    int fact = 1;

    for(int i = 2; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin >> n;

    int Fact = factorialIterative(n);
    cout<<"Factorial is: "<<Fact<<endl;

    return 0;
}