#include<iostream>
#include<algorithm>
using namespace std;

string reverse(string s){
     reverse(s.begin(), s.end());
     return s;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;

    string rev = reverse(s);
    cout<<"Reverse string: "<<rev<<endl;

    return 0;
}