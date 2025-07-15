#include<iostream>
using namespace std;

int findGCD(int a, int b){
    while( b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findLCM(int a, int b){
    return (a * b) / findGCD(a , b);
}

int main(){
    int a, b;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;

    int GCD = findGCD(a,b);
    int LCM = findLCM(a,b);

    cout<<"GCD of a & b : "<<GCD<<endl;
    cout<<"LCM of a & b: "<<LCM<<endl;

    return 0;
}