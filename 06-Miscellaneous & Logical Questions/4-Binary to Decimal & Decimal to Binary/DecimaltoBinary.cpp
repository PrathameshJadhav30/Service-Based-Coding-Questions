#include<iostream>
#include<string>
using namespace std;

string decimalToBinary(int decimal){
    if(decimal == 0){
        return "0";
    }
    string binary = "";
    while(decimal > 0){
        binary = char((decimal % 2) + '0') + binary; //Add reminders to front
        decimal /= 2;
    }
    return binary;
}
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary: " << decimalToBinary(decimal) << endl;
    return 0;
}