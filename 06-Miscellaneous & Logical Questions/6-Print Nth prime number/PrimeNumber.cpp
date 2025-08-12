#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2){
       return false;
    } 
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0){
           return false;
        } 
    }
    return true;
}

int main() {
    int N = 10; // Change this value to get Nth prime

    int count = 0, num = 1;

    // Keep finding primes until we reach the N-th one
    while (count < N) {
        num++;
        if (isPrime(num)) {
            count++;
        }
    }

    cout << N << "th prime number: " << num << "\n";
    return 0;
}
