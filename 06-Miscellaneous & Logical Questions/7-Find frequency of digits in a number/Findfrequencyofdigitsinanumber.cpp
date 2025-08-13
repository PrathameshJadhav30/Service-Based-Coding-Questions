#include<iostream>
using namespace std;

void findDigitFrequency(long long N){
    if(N < 0){
        N = -N;
    }

    int freq[10] ={0};

    if(N == 0){
        freq[0] = 1;
    }else{
        while(N > 0){
            int digit = N % 10;
            freq[digit]++;
            N /= 10;
        }
    }

    cout << "Digit frequencies:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Digit " << i << " : " << freq[i] << " times" << endl;
    }
}
int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    findDigitFrequency(num);

    return 0;
}