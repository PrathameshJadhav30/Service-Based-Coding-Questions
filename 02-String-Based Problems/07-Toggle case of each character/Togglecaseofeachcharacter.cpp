#include <iostream>
using namespace std;

string toggleCase(string str) {
    for (char &ch : str) {
        if (islower(ch)){
           ch = toupper(ch);
        }  
        else if (isupper(ch)){
         ch = tolower(ch);
        }
            
    }
    return str;
}

int main() {
    string s = "HeLLo WorLD";
    cout << "Toggled string: " << toggleCase(s) << endl;
    return 0;
}
