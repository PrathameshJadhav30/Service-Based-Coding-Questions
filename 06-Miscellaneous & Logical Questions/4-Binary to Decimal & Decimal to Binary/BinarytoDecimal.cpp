#include<iostream>
#include<string>
using namespace std;

int binaryToDecimal(string binary){
    int decimal = 0;
    for(char bit : binary){
        decimal = decimal * 2 + (bit - '0'); //Shift left and add bit
    }
    return decimal;
}
int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal: " << binaryToDecimal(binary) << endl;
    return 0;
}