#include<iostream>
using namespace std;

void printFibonacci(int n){
    int a = 0, b = 1;
     
    cout<<"Fibonacci Series: ";
    for(int i = 0; i < n; i++){
        cout<< a <<" ";
        int next  = a + b;
        a = b;
        b = next;
    }
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin >> n;

    printFibonacci(n);

    return 0;
}