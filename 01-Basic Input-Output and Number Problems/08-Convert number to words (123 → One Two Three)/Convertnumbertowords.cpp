#include<iostream>
#include<vector>
using namespace std;

void numberToWords(int n){
    if(n == 0){
        cout<<"Zero";
        return ;
    }

    vector<int> digits;

    //Extract digits and store in reverse
    while(n > 0){
        digits.push_back(n % 10);
        n /= 10;
    }

    //Revrese the digits to get original
    for(int i = digits.size() - 1; i >= 0; i--){
        switch(digits[i]){
            case 0:
              cout<<"Zero ";
              break;
            case 1:
              cout<<"One ";
              break;
            case 2:
              cout<<"Two ";
              break;
            case 3:
              cout<<"Three ";
              break;
            case 4:
              cout<<"Four ";
              break;
            case 5:
              cout<<"Five ";
              break;
            case 6:
              cout<<"Six ";
              break;
            case 7:
              cout<<"Seven ";
              break;
            case 8:
              cout<<"Eight ";
              break;
            case 9:
              cout<<"Nine ";
              break;

        }
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<endl;
    cout<<"Enter a Number: ";
    cin>>n;

    cout<<"Numbers in Word: ";
    numberToWords(n);
    
    return 0;
}