#include<iostream>
using namespace std;

string reverse(string s){
    string result =" ";
    for(int i = s.length() - 1; i >= 0; i--){
        result += s[i];
    }
    return result;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    cin >> s;

    string rev = reverse(s);
    cout<<"Reverse String: "<<rev<<endl;

    return 0;
}