#include<iostream>
#include<unordered_map>
using namespace std;

void countFrequency(string s){
    unordered_map<char, int> freq;

    for(char ch : s){
        freq[ch]++;
    }

    for(auto pair : freq){
        cout<<pair.first <<" : "<<pair.second<<endl;
    }
}
int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;

    countFrequency(s);

    return 0;
}