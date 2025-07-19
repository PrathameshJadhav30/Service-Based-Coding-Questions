#include<iostream>
#include<unordered_map>
using namespace std;

char firstNonRepeatingChar(string s){
    unordered_map<char, int> freq;
     for(char ch : s){
        freq[ch]++;
     }
     for(char ch : s){
        if(freq[ch] == 1){
            return ch;
        }
     }
     return '\0'; // no Non repeatiing character
}

int main(){
    string s;
    cout<<"Enter a String: ";
    cin >> s;

    char ch = firstNonRepeatingChar(s);

    cout<<"First Non-Repeating Character: "<<ch<<endl;
    return 0;
}