#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string findLongestWord(string s){
    string word, longest = " ";
    stringstream ss(s);

    while(ss >> word){
        if(word.length() > longest.length() ){
            longest = word;
        }
    }
    return longest;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin, s);

    string res = findLongestWord(s);
    cout<<"Longest word: "<<res << endl;

    return 0;
}