#include<iostream>
#include<string>
using namespace std;

string compressString(const string &s){
    string res = " ";
    int count = 1;

    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i - 1]){
            count++;
        }else{
            res += s[i - 1] + to_string(count);
            count = 1;
        }
    }
    res += s.back() + to_string(count); // add last group
    return res;
}
int main(){
    string s;
    cout<<endl;
    cout <<"Enter a String: ";
    getline(cin, s);

    string res = compressString(s);
    cout<<"Compressed string: "<<res << endl;

    return 0;
}