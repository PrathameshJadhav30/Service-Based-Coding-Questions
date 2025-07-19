#include<iostream>
#include<algorithm>

using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main(){
    string str1;
    string str2;
    cout<<"Enter a String 1 : ";
    cin>>str1;
    cout<<"Enter a String 2: ";
    cin>>str2;

    if(isAnagram(str1,str2)){
        cout<<"Yes, Strings Are Anagrams.";
    }else{
        cout<<"No, Strings Are Not Anagrams.";
    }
    return 0;
}