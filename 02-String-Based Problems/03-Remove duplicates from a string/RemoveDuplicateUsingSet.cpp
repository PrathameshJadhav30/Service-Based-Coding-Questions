#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

string removeDuplicate(string s){
    unordered_set<char> seen;
    string result = " ";

    for(char ch : s){
        if(seen.find(ch) == seen.end()){
           seen.insert(ch);
           result += ch;
        }
    }
   return result;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;

    string Org = removeDuplicate(s);
    cout<<"After Remove Duplicate: "<<Org<<endl;

    return 0;
}