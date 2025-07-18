#include<iostream>
using namespace std;

string removeDuplicate(string s){
    string result = " ";
    for(char ch : s){
        bool found = false;
        for(char res : result){
            if(res == ch){
                found = true;
                break;
            }
        }
        if(!found){
            result += ch;
        }
    }
    return result;
}
int main(){
    string s;
    cout<<"Enter a String: ";
    cin>>s;

    string org = removeDuplicate(s);
    cout<<"After Remove Duplicates: "<<org<<endl;

    return 0;
}