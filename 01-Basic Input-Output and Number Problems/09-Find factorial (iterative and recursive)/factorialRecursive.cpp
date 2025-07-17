#include<iostream>
using namespace std;

int factorialRecursive(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return n * factorialRecursive(n - 1);
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    int Fact = factorialRecursive(n);
    cout<<"Factorial is: "<< Fact << endl;

    return 0;
}