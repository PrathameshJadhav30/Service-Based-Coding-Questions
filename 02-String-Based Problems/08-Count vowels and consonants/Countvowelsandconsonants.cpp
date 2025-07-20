#include<iostream>
#include<cctype>
#include<string>
using namespace std;

void countVC(const string &s, int &v, int &c){
    v = c = 0;
    for(char ch : s){
        if(isalpha(ch)){
            (ch = tolower(ch)) && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? v++ : c++;
        }
    }
}
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin, s);
    int vowls , consonants;

    countVC(s, vowls, consonants);
    cout<<"Vowels: "<< vowls << endl;
    cout<<"Consonants: "<< consonants <<endl;

    return 0;

}